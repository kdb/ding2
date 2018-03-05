<?php
/**
 * @file
 * kkb_group_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function kkb_group_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kkb_groups_category_listing';
  $page->task = 'page';
  $page->admin_title = 'Groups category listing';
  $page->admin_description = '';
  $page->path = 'temaer/%term';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Themes',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'term' => array(
      'id' => 1,
      'identifier' => 'Taksonomiterm: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'term',
        'vids' => array(
          5 => '5',
          1 => 0,
          12 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          3 => 0,
          4 => 0,
          10 => 0,
          11 => 0,
          6 => 0,
          2 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_kkb_groups_category_listing__panel_context_b98ab283-3635-491c-9210-cb8da5a26269';
  $handler->task = 'page';
  $handler->subtask = 'kkb_groups_category_listing';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'Themes | [current-page:pager][site:name]',
        ),
      ),
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '988af79c-a413-4a43-8c5d-a1b28aae2988';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e806ff55-7233-4b24-9383-43f9025629a6';
    $pane->panel = 'left_sidebar';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'ding_campaign_image_style' => 'medium',
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e806ff55-7233-4b24-9383-43f9025629a6';
    $display->content['new-e806ff55-7233-4b24-9383-43f9025629a6'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-e806ff55-7233-4b24-9383-43f9025629a6';
    $pane = new stdClass();
    $pane->pid = 'new-d8353726-05e7-4c09-9fec-12c19969dec6';
    $pane->panel = 'main_content';
    $pane->type = 'views_panes';
    $pane->subtype = 'kkb_ding_groups_category_temapages-ding_group_overview_simple';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8353726-05e7-4c09-9fec-12c19969dec6';
    $display->content['new-d8353726-05e7-4c09-9fec-12c19969dec6'] = $pane;
    $display->panels['main_content'][0] = 'new-d8353726-05e7-4c09-9fec-12c19969dec6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kkb_groups_category_listing'] = $page;

  return $pages;

}
