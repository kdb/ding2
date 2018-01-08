<?php
/**
 * @file
 * kkb_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kkb_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opening_hours_category_vocabulary_ding_page';
  $strongarm->value = '0';
  $export['opening_hours_category_vocabulary_ding_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'opening_hours_enabled_ding_page';
  $strongarm->value = 1;
  $export['opening_hours_enabled_ding_page'] = $strongarm;

  return $export;
}
