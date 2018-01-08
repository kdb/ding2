<?php
/**
 * @file
 * kkb_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kkb_library_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function kkb_library_field_group_info_alter(&$data) {
  if (isset($data['group_ding_library_attachments|node|ding_library|form'])) {
    $data['group_ding_library_attachments|node|ding_library|form']->data['children'][2] = 'field_ding_library_files'; /* WAS: 'field_ding_library_opening_hours' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function kkb_library_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_library-field_ding_library_list_image'])) {
    $data['node-ding_library-field_ding_library_list_image']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-ding_library-field_ding_library_title_image'])) {
    $data['node-ding_library-field_ding_library_title_image']['required'] = 1; /* WAS: 0 */
  }
}
