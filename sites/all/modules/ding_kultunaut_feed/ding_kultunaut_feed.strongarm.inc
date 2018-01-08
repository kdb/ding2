<?php
/**
 * @file
 * ding_kultunaut_feed.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_kultunaut_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_ding_kultunaut_feed_format';
  $strongarm->value = 'Y/m/d H:i:\\0\\0 T';
  $export['date_format_ding_kultunaut_feed_format'] = $strongarm;

  return $export;
}
