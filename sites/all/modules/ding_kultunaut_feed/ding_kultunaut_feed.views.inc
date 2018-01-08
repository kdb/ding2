<?php

/**
 * @file
 * Set custom handlers for the dr_workbench_moderation_state fields.
 */

/**
 * Implements hook_views_data_alter().
 *
 * Set custom views handlers for the dr_workbench_moderation_state fields.
 */
function ding_kultunaut_feed_views_data_alter(&$data) {
  if (isset($data['node']['nid']['field']['handler'])) {
    $data['node']['nid']['field']['handler'] = 'DingKultunautFeedUidFieldHandler';
  }
}
