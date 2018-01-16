<?php
/**
 * @file
 * kkb_frontpage_promotions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kkb_frontpage_promotions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kkb_frontpage_promotions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kkb_frontpage_promotions_node_info() {
  $items = array(
    'promotion' => array(
      'name' => t('promotion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
