<?php
/**
 * @file
 * kkb_library.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kkb_library_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ding_library_attachments|node|ding_library|form.data|children|2"] = 'field_ding_library_files';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_library-field_ding_library_list_image.required"] = 1;
  $overrides["field_instance.node-ding_library-field_ding_library_title_image.required"] = 1;

 return $overrides;
}
