<?php
/**
 * @file
 * kkb_eresource.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kkb_eresource_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:e-resurser
  $menu_links['main-menu:e-materialer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'e-materialer',
    'router_path' => 'e-materialer',
    'link_title' => 'E-materialer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('E-resurser');


  return $menu_links;
}
