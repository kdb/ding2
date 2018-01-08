<?php
/**
 * @file
 * kkb_page.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kkb_page_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_ding_page_files.settings|display_default"] = 1;
  $overrides["field_base.field_ding_page_files.settings|display_field"] = 1;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_page-field_ding_page_body.required"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_lead.required"] = 0;
  $overrides["field_instance.node-ding_page-field_ding_page_list_image.required"] = 1;

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__ding_page.value|extra_fields|display|opening_hours_week"] = array(
    'default' => array(
      'weight' => 0,
      'visible' => FALSE,
    ),
    'teaser_highlight' => array(
      'weight' => 0,
      'visible' => FALSE,
    ),
    'search_result' => array(
      'weight' => 0,
      'visible' => FALSE,
    ),
    'teaser' => array(
      'weight' => 0,
      'visible' => FALSE,
    ),
  );

 return $overrides;
}
