<?php
/**
 * @file
 * kkb_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kkb_group_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_group_attachments|node|ding_group|form';
  $field_group->group_name = 'group_ding_group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ding_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '5',
    'children' => array(
      0 => 'field_ding_group_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ding_group_attachments|node|ding_group|form'] = $field_group;

  return $export;
}
