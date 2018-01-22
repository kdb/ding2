<?php
/**
 * @file
 * kkb_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kkb_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "menu_block" && $api == "menu_block") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
