core = 7.x
api = 2

; Overrrides
; These projects are added at the beginning of the file to ensure that they are downloaded first
; Subsequent declarations should be ignored to to the --ding2-only-once option.
; This is useful when you need to add a patch to a single module.
projects[og][subdir] = "contrib"
projects[og][version] = "2.7"
; Fix using organic groups for relationships in views
; https://www.drupal.org/node/1890370
projects[og][patch][] = "https://www.drupal.org/files/issues/add-gid-to-relationship-field-1890370-34.patch"

; Projects
projects[alma][type] = "module"
projects[alma][download][type] = "git"
projects[alma][download][url] = "git@github.com:ding2/alma.git"
projects[alma][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/1119: Support non-integer pickup numbers
projects[alma][patch][] = "https://github.com/ding2/alma/pull/19.patch"

projects[ding_devel][type] = "module"
projects[ding_devel][download][type] = "git"
projects[ding_devel][download][url] = "git@github.com:ding2/ding_devel.git"
projects[ding_devel][download][tag] = "7.x-2.0.0"

projects[openruth][type] = "module"
projects[openruth][download][type] = "git"
projects[openruth][download][url] = "git@github.com:ding2/openruth.git"
projects[openruth][download][tag] = "7.x-2.0.0"

projects[ding_frontend][type] = "module"
projects[ding_frontend][download][type] = "git"
projects[ding_frontend][download][url] = "git@github.com:ding2/ding_frontend.git"
projects[ding_frontend][download][tag] = "7.x-2.0.0"
; Make taxonomy menu term context optional. This is needed for eresource frontpage.
projects[ding_frontend][patch][] = "https://github.com/ding2/ding_frontend/pull/16.patch"

projects[ding_groups][type] = "module"
projects[ding_groups][download][type] = "git"
projects[ding_groups][download][url] = "git@github.com:ding2/ding_groups.git"
projects[ding_groups][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/508: Show title image instead of list image frontpage
projects[ding_groups][patch][] = "https://github.com/ding2/ding_groups/pull/2.patch"
; http://platform.dandigbib.org/issues/1142: Create separate nodequeue for frontpage groups
projects[ding_groups][patch][] = "https://github.com/ding2/ding_groups/pull/3.patch"

projects[ding_user_frontend][type] = "module"
projects[ding_user_frontend][download][type] = "git"
projects[ding_user_frontend][download][url] = "git@github.com:ding2/ding_user_frontend.git"
projects[ding_user_frontend][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/1193: Fix security issue regarding viewing other user profile's names
projects[ding_user_frontend][patch][] = "https://github.com/ding2/ding_user_frontend/pull/10.patch"

projects[ding_ting_frontend][type] = "module"
projects[ding_ting_frontend][download][type] = "git"
projects[ding_ting_frontend][download][url] = "git@github.com:ding2/ding_ting_frontend.git"
projects[ding_ting_frontend][download][tag] = "7.x-2.0.0"

#projects[mkdru_ding_frontend][type] = "module"
#projects[mkdru_ding_frontend][download][type] = "git"
#projects[mkdru_ding_frontend][download][url] = "git@github.com:ding2/mkdru_ding_frontend.git"
#projects[mkdru_ding_frontend][download][tag] = "7.x-2.0.0"

projects[ding_content][type] = "module"
projects[ding_content][download][type] = "git"
projects[ding_content][download][url] = "git@github.com:ding2/ding_content.git"
projects[ding_content][download][tag] = "7.x-2.0.0"
; Add more filtering options in Workbench views
projects[ding_content][patch][] = "https://github.com/ding2/ding_content/pull/10.patch"
; http://platform.dandigbib.org/issues/1130: Show description on tag page
projects[ding_content][patch][] = "https://github.com/ding2/ding_content/pull/12.patch"

projects[ding_example_content][type] = "module"
projects[ding_example_content][download][type] = "git"
projects[ding_example_content][download][url] = "git@github.com:ding2/ding_example_content.git"
projects[ding_example_content][download][tag] = "7.x-2.0.0"

projects[ding_frontpage][type] = "module"
projects[ding_frontpage][download][type] = "git"
projects[ding_frontpage][download][url] = "git@github.com:ding2/ding_frontpage.git"
projects[ding_frontpage][download][tag] = "7.x-2.0.0"

projects[ding_library][type] = "module"
projects[ding_library][download][type] = "git"
projects[ding_library][download][url] = "git@github.com:kdb/ding_library.git"
projects[ding_library][download][branch] = "kkb"

projects[ding_news][type] = "module"
projects[ding_news][download][type] = "git"
projects[ding_news][download][url] = "git@github.com:ding2/ding_news.git"
projects[ding_news][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/1106: Add more links to group lists
projects[ding_news][patch][] = "https://github.com/ding2/ding_news/pull/12.patch"
; http://platform.dandigbib.org/issues/510: Remove empty text from groups list
projects[ding_news][patch][] = "https://github.com/ding2/ding_news/pull/14.patch"

projects[ding_event][type] = "module"
projects[ding_event][download][type] = "git"
projects[ding_event][download][url] = "git@github.com:ding2/ding_event.git"
projects[ding_event][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/1106: Add more links to group lists
projects[ding_event][patch][] = "https://github.com/ding2/ding_event/pull/15.patch"
; http://platform.dandigbib.org/issues/510: Remove empty text from groups list
projects[ding_event][patch][] = "https://github.com/ding2/ding_event/pull/16.patch"

projects[ding_permissions][type] = "module"
projects[ding_permissions][download][type] = "git"
projects[ding_permissions][download][url] = "git@github.com:ding2/ding_permissions.git"
projects[ding_permissions][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/678: Show profile names for users.
projects[ding_permissions][patch][] = "https://github.com/ding2/ding_permissions/pull/2.patch"

projects[ding_webtrends][type] = "module"
projects[ding_webtrends][download][type] = "git"
projects[ding_webtrends][download][url] = "git@github.com:ding2/ding_webtrends.git"
projects[ding_webtrends][download][tag] = "7.x-2.0.0"

projects[ding_session_cache][type] = "module"
projects[ding_session_cache][download][type] = "git"
projects[ding_session_cache][download][url] = "git@github.com:ding2/ding_session_cache.git"
projects[ding_session_cache][download][tag] = "7.x-2.0.0"

projects[ding_staff][type] = "module"
projects[ding_staff][download][type] = "git"
projects[ding_staff][download][url] = "git@github.com:ding2/ding_staff.git"
projects[ding_staff][download][tag] = "7.x-2.0.0"
; http://platform.dandigbib.org/issues/756: Fix links to users on staff list.
projects[ding_staff][patch][] = "https://github.com/ding2/ding_staff/pull/2.patch"
; http://platform.dandigbib.org/issues/678: Show profile names for users.
projects[ding_staff][patch][] = "https://github.com/ding2/ding_staff/pull/5.patch"

projects[ding_varnish][type] = "module"
projects[ding_varnish][download][type] = "git"
projects[ding_varnish][download][url] = "git@github.com:ding2/ding_varnish.git"
projects[ding_varnish][download][tag] = "7.x-2.0.0"

projects[ding_contact][type] = "module"
projects[ding_contact][download][type] = "git"
projects[ding_contact][download][url] = "git@github.com:ding2/ding_contact.git"
projects[ding_contact][download][tag] = "7.x-2.0.0"

projects[bpi][type] = "module"
projects[bpi][download][type] = "git"
projects[bpi][download][url] = "git@github.com:ding2/bpi.git"
projects[bpi][download][tag] = "7.x-2.0.0"

projects[ddb_cp][type] = "module"
projects[ddb_cp][download][type] = "git"
projects[ddb_cp][download][url] = "git@github.com:ding2/ddb_cp.git"
projects[ddb_cp][download][tag] = "7.x-2.0.0"

; Base theme
projects[ddbasic][type] = "theme"
projects[ddbasic][download][type] = "git"
projects[ddbasic][download][url] = "git@github.com:kdb/ddbasic.git"
projects[ddbasic][download][branch] = "kkb"

projects[bang][type] = "theme"
projects[bang][download][type] = "git"
projects[bang][download][url] = "git@github.com:kdb/bang.git"

; Libraries
libraries[profiler][download][type] = "git"
libraries[profiler][download][url] = "http://git.drupal.org/project/profiler.git"
libraries[profiler][download][branch] = "7.x-2.0-beta1"
; https://drupal.org/node/1328796, keep dependency order of base profile.
libraries[profiler][patch][] = "http://drupal.org/files/profiler-reverse.patch"

; DDB Modules that should be removed when FBS is ready
projects[ding_redirect][type] = "module"
projects[ding_redirect][download][type] = "git"
projects[ding_redirect][download][url] = "git@github.com:ding2/ding_redirect.git"
projects[ding_redirect][download][tag] = "7.x-2.0.0"

projects[ding_dummy_provider][type] = "module"
projects[ding_dummy_provider][download][type] = "git"
projects[ding_dummy_provider][download][url] = "git@github.com:ding2/ding_dummy_provider.git"
projects[ding_dummy_provider][download][tag] = "7.x-2.0.0"

; Contrib modules
projects[apc][subdir] = "contrib"
projects[apc][version] = "1.0-beta4"

projects[entitycache][subdir] = "contrib"
projects[entitycache][version] = "1.2"
; https://drupal.org/node/2146543, profile 2 blank fields.
projects[entitycache][patch][] = "http://drupal.org/files/issues/2146543-ensure-entity-inserts-clears-caches.1.patch"

projects[fontyourface][subdir] = "contrib"
projects[fontyourface][version] = "2.7"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.8"

projects[memcache][subdir] = "contrib"
projects[memcache][version] = "1.0"

projects[sslproxy][subdir] = "contrib"
projects[sslproxy][version] = "1.0"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[cookiecontrol][subdir] = "contrib"
projects[cookiecontrol][version] = "1.6"
; https://drupal.org/node/2174955, fix translatable link.
projects[cookiecontrol][patch][] = "http://drupal.org/files/issues/translatable_link_title-2174955-1.patch"
; https://www.drupal.org/node/2318997, fix cookie name with UTF-8 characters.
projects[cookiecontrol][patch][] = "https://www.drupal.org/files/issues/cookie-control-utf_8_characters_in-2318997-5.patch"

# Using dev release, as the "stable" version is making errors in the install profile.
projects[uuid][subdir] = "contrib"
projects[uuid][download][type] = "git"
projects[uuid][download][url] = "http://git.drupal.org/project/uuid.git"
projects[uuid][download][revision] = "3f4d9fb"

# Development version where the "unpublished" status have been fixed on the content edit page.
projects[view_unpublished][subdir] = "contrib"
projects[view_unpublished][download][type] = "git"
projects[view_unpublished][download][url] = "http://git.drupal.org/project/view_unpublished.git"
projects[view_unpublished][download][revision] = "e9df1d3"

;;; KKB modules

projects[ding_eresource][type] = "module"
projects[ding_eresource][download][type] = "git"
projects[ding_eresource][download][url] = "git@github.com:kdb/ding_eresource.git"
projects[ding_eresource][download][branch] = "master"

projects[ding_faq][type] = "module"
projects[ding_faq][download][type] = "git"
projects[ding_faq][download][url] = "git@github.com:kdb/ding-faq.git"
projects[ding_faq][download][revision] = "7.x-1.x"

projects[ding_kultunaut_feed][type] = "module"
projects[ding_kultunaut_feed][download][type] = "git"
projects[ding_kultunaut_feed][download][url] = "git@github.com:kdb/ding_kultunaut_feed.git"
projects[ding_kultunaut_feed][download][branch] = "7.x-1.x"

projects[features_override][subdir] = "contrib"
projects[features_override][version] = "2.0-rc2"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta7"

projects[kkb-ddb-modules][type] = "module"
projects[kkb-ddb-modules][download][type] = "git"
projects[kkb-ddb-modules][download][url] = "git@github.com:kdb/kkb-ddb-modules.git"
projects[kkb-ddb-modules][download][branch] = "master"

projects[webform][subdir] = "contrib"
projects[webform][version] = "4.4"

;;; KKB migration modules
projects[migrate][subdir] = "contrib"
projects[migrate][version] = "2.6-rc1"

projects[migrate_d2d][subdir] = "contrib"
projects[migrate_d2d][version] = "2.1-beta1"

projects[migrate_extras][subdir] = "contrib"
projects[migrate_extras][version] = "2.5"

projects[migrate_ding1_ding2][type] = "module"
projects[migrate_ding1_ding2][download][type] = "git"
projects[migrate_ding1_ding2][download][url] = "git@github.com:kdb/migrate_ding1_ding2.git"
projects[migrate_ding1_ding2][download][branch] = "kkb"
