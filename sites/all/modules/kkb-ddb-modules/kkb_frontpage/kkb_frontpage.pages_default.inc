<?php
/**
 * @file
 * kkb_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function kkb_frontpage_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage__kkb-frontpage';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'KKB frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'kkb-frontpage',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding_layout_1';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_secondary' => NULL,
      'main_content' => NULL,
      'main_left_right' => NULL,
      'main_right_right' => NULL,
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
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6795d6ae-3c57-4fb4-b339-3d6373acce88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a3e659f7-e285-4383-aefa-dd87b563ade6';
    $pane->panel = 'attachment_1_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_groups-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3e659f7-e285-4383-aefa-dd87b563ade6';
    $display->content['new-a3e659f7-e285-4383-aefa-dd87b563ade6'] = $pane;
    $display->panels['attachment_1_1'][0] = 'new-a3e659f7-e285-4383-aefa-dd87b563ade6';
    $pane = new stdClass();
    $pane->pid = 'new-74a49488-f11d-40b6-8211-52e84c8b296a';
    $pane->panel = 'primary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_tabroll-ding_frontpage_tabroll';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'frontpage_promoter',
          'settings' => array(
            'promoter' => 'ding_tabroll',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '74a49488-f11d-40b6-8211-52e84c8b296a';
    $display->content['new-74a49488-f11d-40b6-8211-52e84c8b296a'] = $pane;
    $display->panels['primary'][0] = 'new-74a49488-f11d-40b6-8211-52e84c8b296a';
    $pane = new stdClass();
    $pane->pid = 'new-18cfc092-1d0f-42e4-bde8-8a6e314c9bd0';
    $pane->panel = 'primary';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'frontpage_promoter',
          'settings' => array(
            'promoter' => 'ting_search_carousel',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '18cfc092-1d0f-42e4-bde8-8a6e314c9bd0';
    $display->content['new-18cfc092-1d0f-42e4-bde8-8a6e314c9bd0'] = $pane;
    $display->panels['primary'][1] = 'new-18cfc092-1d0f-42e4-bde8-8a6e314c9bd0';
    $pane = new stdClass();
    $pane->pid = 'new-89ac7869-8f53-4b2d-a1b6-0c30726134b6';
    $pane->panel = 'primary';
    $pane->type = 'interaction_pane';
    $pane->subtype = 'interaction_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'count' => '5',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'lazy',
      'settings' => array(
        'load_strategy' => 'page-loaded',
        'show_spinner' => 0,
        'load_text' => '',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '89ac7869-8f53-4b2d-a1b6-0c30726134b6';
    $display->content['new-89ac7869-8f53-4b2d-a1b6-0c30726134b6'] = $pane;
    $display->panels['primary'][2] = 'new-89ac7869-8f53-4b2d-a1b6-0c30726134b6';
    $pane = new stdClass();
    $pane->pid = 'new-1ced497e-329b-4f00-a19e-60b0d55029e4';
    $pane->panel = 'primary';
    $pane->type = 'serendipity_ting_object';
    $pane->subtype = 'serendipity_ting_object';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'compact',
      'sort_weight' => FALSE,
      'max' => '20',
      'min' => '10',
      'random' => 1,
      'selected_keys' => array(
        'ting_object' => 'ting_object',
        'frontpage' => 'frontpage',
      ),
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
        3 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'lazy',
      'settings' => array(
        'load_strategy' => 'page-loaded',
        'show_spinner' => 0,
        'load_text' => '',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1ced497e-329b-4f00-a19e-60b0d55029e4';
    $display->content['new-1ced497e-329b-4f00-a19e-60b0d55029e4'] = $pane;
    $display->panels['primary'][3] = 'new-1ced497e-329b-4f00-a19e-60b0d55029e4';
    $pane = new stdClass();
    $pane->pid = 'new-de39b33a-c18b-4584-b58d-ac5503bd2e8f';
    $pane->panel = 'primary';
    $pane->type = 'popular';
    $pane->subtype = 'popular';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'month' => '',
      'libcode' => 0,
      'override_title' => 1,
      'override_title_text' => 'Månedens populæreste titler',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'de39b33a-c18b-4584-b58d-ac5503bd2e8f';
    $display->content['new-de39b33a-c18b-4584-b58d-ac5503bd2e8f'] = $pane;
    $display->panels['primary'][4] = 'new-de39b33a-c18b-4584-b58d-ac5503bd2e8f';
    $pane = new stdClass();
    $pane->pid = 'new-20a8af4e-90a0-42a4-be60-89cb72e44127';
    $pane->panel = 'secondary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_news-ding_news_frontpage_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Library news',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '20a8af4e-90a0-42a4-be60-89cb72e44127';
    $display->content['new-20a8af4e-90a0-42a4-be60-89cb72e44127'] = $pane;
    $display->panels['secondary'][0] = 'new-20a8af4e-90a0-42a4-be60-89cb72e44127';
    $pane = new stdClass();
    $pane->pid = 'new-1235d134-3c15-4d11-86e4-a48f9c8737b3';
    $pane->panel = 'tertiary';
    $pane->type = 'views_panes';
    $pane->subtype = 'ding_event-ding_event_list_frontpage';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '1235d134-3c15-4d11-86e4-a48f9c8737b3';
    $display->content['new-1235d134-3c15-4d11-86e4-a48f9c8737b3'] = $pane;
    $display->panels['tertiary'][0] = 'new-1235d134-3c15-4d11-86e4-a48f9c8737b3';
    $pane = new stdClass();
    $pane->pid = 'new-b14f0ccc-f81c-4267-b843-2fd333f260f8';
    $pane->panel = 'tertiary';
    $pane->type = 'block';
    $pane->subtype = 'finurlig_widget-fffWidget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Finurlige fakta',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b14f0ccc-f81c-4267-b843-2fd333f260f8';
    $display->content['new-b14f0ccc-f81c-4267-b843-2fd333f260f8'] = $pane;
    $display->panels['tertiary'][1] = 'new-b14f0ccc-f81c-4267-b843-2fd333f260f8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['page_ding_frontpage__kkb-frontpage'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context_2';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -20;
  $handler->conf = array(
    'title' => 'KKB site template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'ding2_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding_top' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'branding_bottom' => NULL,
      'branding' => NULL,
      'bottom' => NULL,
      'navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '92a45db0-147b-411f-8833-8377a52f5198';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $display->content['new-e999c9e4-00d5-4222-8690-5c8e6f3d5339'] = $pane;
    $display->panels['bottom'][0] = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
    $pane = new stdClass();
    $pane->pid = 'new-003c8000-b270-44ba-aed5-815b265154b0';
    $pane->panel = 'branding';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontpage_promotion-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '003c8000-b270-44ba-aed5-815b265154b0';
    $display->content['new-003c8000-b270-44ba-aed5-815b265154b0'] = $pane;
    $display->panels['branding'][0] = 'new-003c8000-b270-44ba-aed5-815b265154b0';
    $pane = new stdClass();
    $pane->pid = 'new-3c879038-1011-4427-8465-f638e18375e1';
    $pane->panel = 'branding';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c879038-1011-4427-8465-f638e18375e1';
    $display->content['new-3c879038-1011-4427-8465-f638e18375e1'] = $pane;
    $display->panels['branding'][1] = 'new-3c879038-1011-4427-8465-f638e18375e1';
    $pane = new stdClass();
    $pane->pid = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
    $pane->panel = 'branding';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-tabs-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
    $display->content['new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079'] = $pane;
    $display->panels['branding'][2] = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
    $pane = new stdClass();
    $pane->pid = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $pane->panel = 'content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'system-messages',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $display->content['new-1769a64d-2cbe-490d-87aa-a2c3ee082997'] = $pane;
    $display->panels['content'][0] = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
    $pane = new stdClass();
    $pane->pid = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
    $pane->panel = 'content';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'external_user',
          'settings' => NULL,
          'context' => array(
            0 => 'logged-in-user',
          ),
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'user/*',
          ),
          'context' => 'empty',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '76338aa5-3ee9-4256-9414-eab9979db07b';
    $display->content['new-76338aa5-3ee9-4256-9414-eab9979db07b'] = $pane;
    $display->panels['content'][1] = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
    $pane = new stdClass();
    $pane->pid = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = '4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $display->content['new-4637ed6a-8c15-46bb-ae3b-4de4089e860d'] = $pane;
    $display->panels['content'][2] = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
    $pane = new stdClass();
    $pane->pid = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-first',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $display->content['new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2'] = $pane;
    $display->panels['footer'][0] = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
    $pane = new stdClass();
    $pane->pid = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-second',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $pane->uuid = '3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $display->content['new-3a72e819-3274-4d12-8fe3-414c0cbc3151'] = $pane;
    $display->panels['footer'][1] = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
    $pane = new stdClass();
    $pane->pid = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-third',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'd9877e3c-cae9-4067-99af-305cb0e70bf9';
    $display->content['new-d9877e3c-cae9-4067-99af-305cb0e70bf9'] = $pane;
    $display->panels['footer'][2] = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
    $pane = new stdClass();
    $pane->pid = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $pane->panel = 'footer';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'attachment-fourth',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = 'd59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $display->content['new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf'] = $pane;
    $display->panels['footer'][3] = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
    $pane = new stdClass();
    $pane->pid = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
    $display->content['new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0'] = $pane;
    $display->panels['header'][0] = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
    $pane = new stdClass();
    $pane->pid = 'new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
    $display->content['new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39'] = $pane;
    $display->panels['header'][1] = 'new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
    $pane = new stdClass();
    $pane->pid = 'new-d9c1432b-77cc-432c-987a-eb64569a0b88';
    $pane->panel = 'header';
    $pane->type = 'user_menu';
    $pane->subtype = 'user_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'user/[user:uid]',
      'context' => 'logged-in-user',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'js-mobile-user-menu',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd9c1432b-77cc-432c-987a-eb64569a0b88';
    $display->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88'] = $pane;
    $display->panels['header'][2] = 'new-d9c1432b-77cc-432c-987a-eb64569a0b88';
    $pane = new stdClass();
    $pane->pid = 'new-4aa03251-3daf-47de-ae67-c7b4dce04345';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'ding_gatewayf_registration-registration';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4aa03251-3daf-47de-ae67-c7b4dce04345';
    $display->content['new-4aa03251-3daf-47de-ae67-c7b4dce04345'] = $pane;
    $display->panels['header'][3] = 'new-4aa03251-3daf-47de-ae67-c7b4dce04345';
    $pane = new stdClass();
    $pane->pid = 'new-d3642018-c9d0-49b7-9734-5b25006c4b01';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'ding_gatewayf-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'd3642018-c9d0-49b7-9734-5b25006c4b01';
    $display->content['new-d3642018-c9d0-49b7-9734-5b25006c4b01'] = $pane;
    $display->panels['header'][4] = 'new-d3642018-c9d0-49b7-9734-5b25006c4b01';
    $pane = new stdClass();
    $pane->pid = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '94a239e5-00e0-4807-917f-df52c53405e7';
    $display->content['new-94a239e5-00e0-4807-917f-df52c53405e7'] = $pane;
    $display->panels['navigation'][0] = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
    $pane = new stdClass();
    $pane->pid = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3202a330-fa71-44f2-be0a-265ed734b321';
    $display->content['new-3202a330-fa71-44f2-be0a-265ed734b321'] = $pane;
    $display->panels['navigation'][1] = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
    $pane = new stdClass();
    $pane->pid = 'new-b699f6da-82a5-4c83-9ae2-ec44c095ef97';
    $pane->panel = 'navigation';
    $pane->type = 'views_panes';
    $pane->subtype = 'kkb_service_notice-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '75',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b699f6da-82a5-4c83-9ae2-ec44c095ef97';
    $display->content['new-b699f6da-82a5-4c83-9ae2-ec44c095ef97'] = $pane;
    $display->panels['navigation'][2] = 'new-b699f6da-82a5-4c83-9ae2-ec44c095ef97';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context_2'] = $handler;

  return $export;
}
