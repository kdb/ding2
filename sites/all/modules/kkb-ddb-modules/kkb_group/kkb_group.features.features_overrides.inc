<?php
/**
 * @file
 * kkb_group.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kkb_group_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_group-field_ding_group_body.required"] = 0;
  $overrides["field_instance.node-ding_group-field_ding_group_list_image.required"] = 1;

 return $overrides;
}
