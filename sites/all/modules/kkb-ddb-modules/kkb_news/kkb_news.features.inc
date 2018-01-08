<?php
/**
 * @file
 * kkb_news.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function kkb_news_field_default_field_bases_alter(&$data) {
  if (isset($data['field_ding_news_files'])) {
    $data['field_ding_news_files']['settings']['display_default'] = 1; /* WAS: 0 */
    $data['field_ding_news_files']['settings']['display_field'] = 1; /* WAS: 0 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function kkb_news_field_default_field_instances_alter(&$data) {
  if (isset($data['node-ding_news-field_ding_news_lead'])) {
    $data['node-ding_news-field_ding_news_lead']['required'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-ding_news-field_ding_news_list_image'])) {
    $data['node-ding_news-field_ding_news_list_image']['required'] = 1; /* WAS: 0 */
    $data['node-ding_news-field_ding_news_list_image']['widget']['settings']['allowed_schemes']['vimeo'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['widget']['settings']['allowed_schemes']['youtube'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['widget']['settings']['allowed_types']['document'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['widget']['settings']['browser_plugins']['media_internet'] = 0; /* WAS: '' */
    $data['node-ding_news-field_ding_news_list_image']['widget']['settings']['browser_plugins']['youtube'] = 0; /* WAS: '' */
    unset($data['node-ding_news-field_ding_news_list_image']['widget']['settings']['allowed_types']['default']);
    unset($data['node-ding_news-field_ding_news_list_image']['widget']['settings']['browser_plugins']['library']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function kkb_news_strongarm_alter(&$data) {
  if (isset($data['comment_ding_news'])) {
    $data['comment_ding_news']->value = 2; /* WAS: 1 */
  }
}
