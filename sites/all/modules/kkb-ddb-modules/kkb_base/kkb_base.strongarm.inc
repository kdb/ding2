<?php
/**
 * @file
 * kkb_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kkb_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_date_format';
  $strongarm->value = 'd-m-Y H:i:s';
  $export['scheduler_date_format'] = $strongarm;

  return $export;
}
