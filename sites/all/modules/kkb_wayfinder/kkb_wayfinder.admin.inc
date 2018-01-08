<?php

/**
 * @file
 * Administration for kkb_wayfinder.
 */

/**
 * Settings form.
 */
function kkb_wayfinder_admin_form($form, &$form_state) {
  $branches = variable_get('kkb_wayfinder_branches', array());
  $branches_value = array();
  foreach ($branches as $name => $id) {
    $branches_value[] = $id . '|' . $name;
  }
  $form['kkb_wayfinder_branches'] = array(
    '#type' => 'textarea',
    '#title' => t('Branch mapping'),
    '#default_value' => implode("\n", $branches_value),
    '#description' => t('Maps branch names (as given by FBS) to IDs used in Wayfinder. Enter one mapping per line in the format <em>id|name</em>. Whitespace and casing will be normalized.'),
    '#rows' => 30,
  );

  $form['#submit'][] = 'kkb_wayfinder_admin_form_submit';
  return system_settings_form($form);
}

/**
 * Submit handler for settings form.
 *
 * Normalize mapping so it's easier to work with.
 */
function kkb_wayfinder_admin_form_submit(&$form, &$form_state) {
  $lines = explode("\n", trim($form_state['values']['kkb_wayfinder_branches']));
  $branches = array();
  foreach ($lines as $line) {
    list($id, $name) = explode('|', trim($line));
    $id = trim($id);
    $name = trim($name);
    if (!empty($id) && !empty($name)) {
      $branches[drupal_strtolower($name)] = $id;
    }
  }

  form_set_value($form['kkb_wayfinder_branches'], $branches, $form_state);
}
