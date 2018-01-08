<?php
/**
 * @file
 * kkb_event.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kkb_event_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_ding_event';
  $strongarm->value = 1;
  $export['scheduler_unpublish_required_ding_event'] = $strongarm;

  return $export;
}
