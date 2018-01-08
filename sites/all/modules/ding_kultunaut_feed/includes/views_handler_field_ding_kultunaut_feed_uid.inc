<?php

/**
 * @file
 * Extension of views_handler_field_node for Ding Kultunaut Feed UID.
 */

/**
 * Field handler displays a Kultunaut UID based on the node ID etc.
 *
 * @ingroup views_field_handlers
 */
class DingKultunautFeedUidFieldHandler extends views_handler_field_node {
  /**
   * Option definition.
   *
   * Set default option to relative links.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['ding_kultunaut_feed_uid'] = array('definition bool' => 'ding_kultunaut_feed');

    return $options;
  }

  /**
   * Option form.
   *
   * Add an option to select the desired ID type.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['ding_kultunaut_feed_uid'] = array(
      '#type' => 'checkbox',
      '#title' => t('Ding Kultunaut Feed UID'),
      '#default_value' => $this->options['ding_kultunaut_feed_uid'],
      '#description' => t('Use Ding Kultunaut Feed UID instead of ordinary Node ID.'),
    );
  }

  /**
   * Prerender field by generating the Kultunaut Feed UID.
   */
  public function pre_render(&$values) {
    if (!empty($this->options['ding_kultunaut_feed_uid'])) {
      foreach ($values as &$value) {
        $node = $value->_field_data['nid']['entity'];
        // This is the algorithm used in Ding 1.
        $value->ding_kultunaut_feed_uid = md5($node->nid . $node->type . $node->language . $node->vid . $node->revision_uid);
      }
    }

    return parent::pre_render($values);
  }

  /**
   * Render the Kultunaut Feed UID.
   */
  public function render_link($data, $values) {
    if (!empty($this->options['ding_kultunaut_feed_uid']) && !empty($values->ding_kultunaut_feed_uid)) {
      $data = $values->ding_kultunaut_feed_uid;
    }
    return parent::render_link($data, $values);
  }
}
