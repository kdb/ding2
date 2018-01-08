<?php
/**
 * @file
 * Simple plugin to show general opening hours and edit it easily.
 */

$plugin = array(
  'title' => t('General opening hours'),
  'description' => t('Opening hours'),
  'single' => TRUE,

  'category' => t('Ding!'),
);

/**
 * Render the block.
 */
function kkb_library_lib_opening_hours_content_type_render($subtype, $conf, $panel_args, $context) {

  $params = array(
    'text' => $conf['lib_opening_hours_text'],
    'button' => l(t('Read more'), $conf['lib_opening_hours_link'])
  );

  if (empty($conf['lib_opening_hours_text']['value'])) {
    return;
  }

  // Defined the return block.
  $block = new stdClass();
  $block->content = theme('kkb_library_general_opening_hours', $params);

  return $block;
}

/**
 * Adding the admin form, to be able to control the required context.
 */
function kkb_library_lib_opening_hours_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['lib_opening_hours_text'] = array(
    '#type'=> 'text_format',
    '#title' => t('Messsage'),
    '#description' => t('Just type what you want to appear as the openinghours message.'),
    '#default_value' => !empty($conf['lib_opening_hours_text']['value']) ? $conf['lib_opening_hours_text']['value'] : '',
    '#format' => 'full_html',
  );

  $form['lib_opening_hours_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Button destination'),
    '#default_value' => !empty($conf['lib_opening_hours_link']) ? $conf['lib_opening_hours_link'] : '',
  );


  return $form;
}

/**
 * Submit handler for the admin form.
 */
function kkb_library_lib_opening_hours_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}
