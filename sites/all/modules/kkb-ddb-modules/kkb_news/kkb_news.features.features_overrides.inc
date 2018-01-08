<?php
/**
 * @file
 * kkb_news.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function kkb_news_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_ding_news_files.settings|display_default"] = 1;
  $overrides["field_base.field_ding_news_files.settings|display_field"] = 1;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-ding_news-field_ding_news_lead.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.required"] = 1;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|allowed_schemes|vimeo"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|allowed_schemes|youtube"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|allowed_types|default"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|allowed_types|document"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|browser_plugins|library"]["DELETED"] = TRUE;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|browser_plugins|media_internet"] = 0;
  $overrides["field_instance.node-ding_news-field_ding_news_list_image.widget|settings|browser_plugins|youtube"] = 0;

  // Exported overrides for: variable
  $overrides["variable.comment_ding_news.value"] = 2;

 return $overrides;
}
