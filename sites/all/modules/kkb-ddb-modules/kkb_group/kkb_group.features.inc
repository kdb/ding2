<?php
/**
 * @file
 * kkb_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kkb_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function kkb_group_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_group-field_ding_group_body'])) {
    $data['node-ding_group-field_ding_group_body']['required'] = 0; /* WAS: 1 */
  }
  if (isset($data['node-ding_group-field_ding_group_list_image'])) {
    $data['node-ding_group-field_ding_group_list_image']['required'] = 1; /* WAS: 0 */
  }
}
