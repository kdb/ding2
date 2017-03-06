<?php

namespace Deployer;

require 'recipe/common.php';

// Configuration.
set('ssh_type', 'native');

set('drush', '/home/kkbdeploy/.composer/vendor/bin/drush');

// Dirs Configuration.
set('drupal_site', 'default');
set('shared_dirs', [
  'sites/{{drupal_site}}/files',
]);
set('shared_files', [
  'sites/{{drupal_site}}/settings.php',
]);
set('writable_dirs', [
  'sites/{{drupal_site}}/files',
]);

// The repository.
set('repository', 'https://github.com/kdb/ding2.git');
set('branch', 'kdb');

// Deploy to dev per default.
set('default_stage', 'dev');

// Whether updb has run.
set('updb_ran', false);

// Tables to skip when syncing.
set('sync_skip_tables', function () {
  return implode(',', [
      'cache',
      'cache_block',
      'cache_bootstrap',
      'cache_ding_session_cache',
      'cache_entity_comment',
      'cache_entity_field_collection_item',
      'cache_entity_file',
      'cache_entity_node',
      'cache_entity_og_membership',
      'cache_entity_og_membership_type',
      'cache_entity_profile2',
      'cache_entity_taxonomy_term',
      'cache_entity_taxonomy_vocabulary',
      'cache_entity_user',
      'cache_field',
      'cache_filter',
      'cache_form',
      'cache_image',
      'cache_l10n_update',
      'cache_libraries',
      'cache_menu',
      'cache_page',
      'cache_pagepreview',
      'cache_panels',
      'cache_path',
      'cache_rules',
      'cache_ting',
      'cache_ting_search_autocomplete',
      'cache_token',
      'cache_update',
      'cache_variable',
      'cache_views',
      'cache_views_data',
      'sessions',
      'watchdog',
    ]);
 });


// Server setup.
server('dev', 'bibliotek.kk.dk')
  ->stage('dev')
  ->user('kkbdeploy')
  ->identityFile()
  ->set('sync_from', '/var/www/prod.bibliotek.kk.dk')
  ->set('deploy_path', '/var/www/dev.bibliotek.kk.dk');

server('demo', 'bibliotek.kk.dk')
  ->stage('demo')
  ->user('kkbdeploy')
  ->identityFile()
  ->set('sync_from', '/var/www/prod.bibliotek.kk.dk')
  ->set('deploy_path', '/var/www/demo.bibliotek.kk.dk');

server('stg', 'bibliotek.kk.dk')
  ->stage('stg')
  ->user('kkbdeploy')
  ->identityFile()
  ->set('sync_from', '/var/www/prod.bibliotek.kk.dk')
  ->set('deploy_path', '/var/www/stg.bibliotek.kk.dk');

server('prod', 'bibliotek.kk.dk')
  ->stage('prod')
  ->user('kkbdeploy')
  ->identityFile()
  ->set('deploy_path', '/var/www/prod.bibliotek.kk.dk');

desc("Ensure the profile has been checked out");
task('build:prepare', function () {
  $repository = trim(get('repository'));
  $branch = get('branch');
  $git = get('bin/git');

  cd('{{deploy_path}}');
  if (!test('[ -d build ]')) {
    run("$git clone $repository build");
  }

  run("cd build && $git checkout $branch");
});

//desc("Build core.");
task('build:core', function () {
  $releasePath = get('release_path');
  // Drush make doesn't like overwriting an existing directory.
  run("rmdir $releasePath");
  run("{{drush}} make {{deploy_path}}/build/drupal.make --projects=drupal -y $releasePath");
})
  ->desc("Build core.");

desc("Build ding2.");
task('build:ding2', function () {
  cd('{{deploy_path}}');

  run('cp -ar build {{release_path}}/profiles/ding2');
  cd('{{release_path}}/profiles/ding2');
  run("{{drush}} make ding2.make --no-core -y --contrib-destination=.");
});

desc("Run database updates.");
task('drush:updb', function () {
  set('updb_ran', true);
  cd('{{release_path}}');
  run("{{drush}} updb -y");
});

desc("Clear caches.");
task('drush:ccall', function () {
  cd('{{release_path}}');
  run("{{drush}} cc all");
});

desc("Set site offline.");
task('drush:site_offline', function () {
  cd('{{release_path}}');
  run("{{drush}} vset site_offline 1");
});

desc("Set site online.");
task('drush:site_online', function () {
  cd('{{release_path}}');
  run("{{drush}} vset site_offline 0");
});

// TODO: Clean up old DB dumps.
desc("Dump database.");
task('drush:db_dump', function () {
  cd('{{release_path}}');
  run("{{drush}} sql-dump -y > {{release_path}}.sql");
});

desc("Restore dumped database.");
task('drush:db_restore', function () {
  if (get('updb_ran')) {
    cd('{{release_path}}');
    run("{{drush}} sql-drop -y");
    run("{{drush}} sqlc < {{release_path}}.sql");
  }
});

desc("Sync prod database to site.");
task('site:sync_database', function () {
  if (!has('sync_from')) {
    return;
  }

  set('dump_command', 'cd {{sync_from}}/current && {{drush}} sql-dump -y --structure-tables-list={{sync_skip_tables}}');
  set('import_command', 'cd {{deploy_path}}/current && {{drush}} sqlc');

  $name = get('server')['name'];
  writeln("<comment>Syncing prod database to {$name}</comment>");
  // Drop all tables so tables not yet on prod doesn't kill update hooks.
  run("cd {{deploy_path}}/current && {{drush}} sql-drop -y");
  run("({{dump_command}}) | ({{import_command}})");
});

desc('Sync prod files to site');
task('site:sync_files', function () {
  if (!has('sync_from')) {
    return;
  }

  foreach (get('shared_dirs') as $dir) {
    $name = get('server')['name'];
    writeln(parse("<comment>Syncing prod {$dir} to {$name}</comment>"));
    run("rsync -ar --del {{sync_from}}/shared/{$dir}/ {{deploy_path}}/shared/{$dir}/");
  }
});

desc('Sync database and files.');
task('sync', [
    'site:sync_database',
    'site:sync_files',
    'drush:updb',
    'drush:ccall',
]);

// If deploy fails in updb or after, restore old dump.
onFailure('deploy', 'drush:db_restore');
after('deploy:failed', 'deploy:unlock');

// Main deplayment procedure.
task('deploy', [
  'deploy:prepare',
  'deploy:lock',
  'deploy:release',
  'build:prepare',
  'build:core',
  'build:ding2',
  'deploy:shared',
  'drush:db_dump',
  'drush:site_offline',
  'drush:updb',
  'drush:ccall',
  'drush:site_online',
  'deploy:symlink',
  'deploy:unlock',
  'cleanup',
]);
