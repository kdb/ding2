<?php
/**
 * @file
 * ding_kultunaut_feed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_kultunaut_feed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_kultunaut_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding Kultunaut-feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: OG membership: Group Indholdselement from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Bibliotek';
  /* Forbindelse: Indhold: List image (field_ding_event_list_image:fid) */
  $handler->display->display_options['relationships']['field_ding_event_list_image_fid']['id'] = 'field_ding_event_list_image_fid';
  $handler->display->display_options['relationships']['field_ding_event_list_image_fid']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['relationships']['field_ding_event_list_image_fid']['field'] = 'field_ding_event_list_image_fid';
  $handler->display->display_options['relationships']['field_ding_event_list_image_fid']['label'] = 'Liste billede';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_ding_event_date_2']['id'] = 'field_ding_event_date_2';
  $handler->display->display_options['fields']['field_ding_event_date_2']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_2']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_2']['label'] = 'ding_kultunaut_feed_duration';
  $handler->display->display_options['fields']['field_ding_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_2']['alter']['text'] = '[field_ding_event_date_2-value]![field_ding_event_date_2-value2]';
  $handler->display->display_options['fields']['field_ding_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_2']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'titel';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'uid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['ding_kultunaut_feed_uid'] = 1;
  /* Felt: Indhold: Lead */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = 'beskrivelse';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_ding_event_lead']['settings'] = array(
    'trim_length' => '600',
  );
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_ding_event_date']['id'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date']['label'] = 'startdato';
  $handler->display->display_options['fields']['field_ding_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date']['settings'] = array(
    'format_type' => 'ding_kultunaut_feed_format',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_ding_event_date_1']['id'] = 'field_ding_event_date_1';
  $handler->display->display_options['fields']['field_ding_event_date_1']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['field'] = 'field_ding_event_date';
  $handler->display->display_options['fields']['field_ding_event_date_1']['label'] = 'slutdato';
  $handler->display->display_options['fields']['field_ding_event_date_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_date_1']['settings'] = array(
    'format_type' => 'ding_kultunaut_feed_format',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Felt: Library */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'bibname';
  $handler->display->display_options['fields']['og_group_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_group_ref']['delta_offset'] = '0';
  /* Felt: Indhold: Address - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['id'] = 'field_ding_library_addresse_thoroughfare';
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['field'] = 'field_ding_library_addresse_thoroughfare';
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['label'] = 'bibstreet';
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse_thoroughfare']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Address - Postnummer */
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['id'] = 'field_ding_library_addresse_postal_code';
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['field'] = 'field_ding_library_addresse_postal_code';
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['label'] = 'bibzip';
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse_postal_code']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['id'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['field'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['label'] = 'bibtown';
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_addresse_locality']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Phone number */
  $handler->display->display_options['fields']['field_ding_library_phone_number']['id'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['table'] = 'field_data_field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['field'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['label'] = 'bibphone';
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_phone_number']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Location - Thoroughfare (i.e. Street address) */
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['id'] = 'field_ding_event_location_thoroughfare';
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['field'] = 'field_ding_event_location_thoroughfare';
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['label'] = 'at street';
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['empty'] = '[field_ding_library_addresse_thoroughfare]';
  $handler->display->display_options['fields']['field_ding_event_location_thoroughfare']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Location - Postnummer */
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['id'] = 'field_ding_event_location_postal_code';
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['field'] = 'field_ding_event_location_postal_code';
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['label'] = 'at zip';
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['empty'] = '[field_ding_library_addresse_postal_code]';
  $handler->display->display_options['fields']['field_ding_event_location_postal_code']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Location - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ding_event_location_locality']['id'] = 'field_ding_event_location_locality';
  $handler->display->display_options['fields']['field_ding_event_location_locality']['table'] = 'field_data_field_ding_event_location';
  $handler->display->display_options['fields']['field_ding_event_location_locality']['field'] = 'field_ding_event_location_locality';
  $handler->display->display_options['fields']['field_ding_event_location_locality']['label'] = 'at town';
  $handler->display->display_options['fields']['field_ding_event_location_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_locality']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_location_locality']['empty'] = '[field_ding_library_addresse_locality]';
  $handler->display->display_options['fields']['field_ding_event_location_locality']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Phone number */
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['id'] = 'field_ding_library_phone_number_1';
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['table'] = 'field_data_field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['field'] = 'field_ding_library_phone_number';
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['label'] = 'at phone';
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_phone_number_1']['element_default_classes'] = FALSE;
  /* Felt: Fil: Sti */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_ding_event_list_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = 'list image';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['field_ding_event_body']['id'] = 'field_ding_event_body';
  $handler->display->display_options['fields']['field_ding_event_body']['table'] = 'field_data_field_ding_event_body';
  $handler->display->display_options['fields']['field_ding_event_body']['field'] = 'field_ding_event_body';
  $handler->display->display_options['fields']['field_ding_event_body']['label'] = 'long description';
  $handler->display->display_options['fields']['field_ding_event_body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_body']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Target */
  $handler->display->display_options['fields']['field_ding_event_target']['id'] = 'field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['table'] = 'field_data_field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['field'] = 'field_ding_event_target';
  $handler->display->display_options['fields']['field_ding_event_target']['label'] = 'target';
  $handler->display->display_options['fields']['field_ding_event_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_target']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_target']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Category */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = 'category';
  $handler->display->display_options['fields']['field_ding_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_category']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Sti */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'url';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Felt: Indhold: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = 'price';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_price']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Sorteringskriterie: Indhold: Date -  startdato (field_ding_event_date) */
  $handler->display->display_options['sorts']['field_ding_event_date_value']['id'] = 'field_ding_event_date_value';
  $handler->display->display_options['sorts']['field_ding_event_date_value']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['sorts']['field_ding_event_date_value']['field'] = 'field_ding_event_date_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filterkriterie: Indhold: Date - slutdato (field_ding_event_date:value2) */
  $handler->display->display_options['filters']['field_ding_event_date_value2']['id'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['field'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['year_range'] = '-0:+3';
  /* Filterkriterie: Indhold: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['id'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['field'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['operator'] = 'not empty';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['style_options']['root_node'] = 'activities';
  $handler->display->display_options['style_options']['item_node'] = 'activity';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'field_ding_event_body' => 'field_ding_event_body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'field_ding_event_body' => 'field_ding_event_body',
  );
  $handler->display->display_options['path'] = 'kultunaut_export';

  /* Display: Data export for library */
  $handler = $view->new_display('views_data_export', 'Data export for library', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['style_options']['root_node'] = 'activities';
  $handler->display->display_options['style_options']['item_node'] = 'activity';
  $handler->display->display_options['style_options']['no_entity_encode'] = array(
    'field_ding_event_body' => 'field_ding_event_body',
  );
  $handler->display->display_options['style_options']['cdata_wrapper'] = array(
    'field_ding_event_body' => 'field_ding_event_body',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Slug (field_ding_library_slug) */
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['id'] = 'field_ding_library_slug_value';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['table'] = 'field_data_field_ding_library_slug';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['field'] = 'field_ding_library_slug_value';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ding_library_slug_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_event' => 'ding_event',
  );
  /* Filterkriterie: Indhold: Date - slutdato (field_ding_event_date:value2) */
  $handler->display->display_options['filters']['field_ding_event_date_value2']['id'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['field'] = 'field_ding_event_date_value2';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_ding_event_date_value2']['year_range'] = '-0:+3';
  /* Filterkriterie: Indhold: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['id'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['table'] = 'field_data_field_ding_library_addresse';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['field'] = 'field_ding_library_addresse_locality';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['field_ding_library_addresse_locality']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'kultunaut_export/%';
  $translatables['ding_kultunaut_feed'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Bibliotek'),
    t('Liste billede'),
    t('ding_kultunaut_feed_duration'),
    t('[field_ding_event_date_2-value]![field_ding_event_date_2-value2]'),
    t('titel'),
    t('uid'),
    t('beskrivelse'),
    t('startdato'),
    t('slutdato'),
    t('bibname'),
    t('bibstreet'),
    t('bibzip'),
    t('bibtown'),
    t('bibphone'),
    t('at street'),
    t('[field_ding_library_addresse_thoroughfare]'),
    t('at zip'),
    t('[field_ding_library_addresse_postal_code]'),
    t('at town'),
    t('[field_ding_library_addresse_locality]'),
    t('at phone'),
    t('list image'),
    t('long description'),
    t('target'),
    t('category'),
    t('url'),
    t('price'),
    t('Data export'),
    t('Data export for library'),
    t('Alle'),
  );
  $export['ding_kultunaut_feed'] = $view;

  return $export;
}
