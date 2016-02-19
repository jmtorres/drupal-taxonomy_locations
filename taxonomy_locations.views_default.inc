<?php
/**
 * @file
 * taxonomy_locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function taxonomy_locations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location_county';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Location County';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Location Code */
  $handler->display->display_options['fields']['field_location_code']['id'] = 'field_location_code';
  $handler->display->display_options['fields']['field_location_code']['table'] = 'field_data_field_location_code';
  $handler->display->display_options['fields']['field_location_code']['field'] = 'field_location_code';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Location Code (field_location_code) */
  $handler->display->display_options['arguments']['field_location_code_value']['id'] = 'field_location_code_value';
  $handler->display->display_options['arguments']['field_location_code_value']['table'] = 'field_data_field_location_code';
  $handler->display->display_options['arguments']['field_location_code_value']['field'] = 'field_location_code_value';
  $handler->display->display_options['arguments']['field_location_code_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_location_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_location_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_location_code_value']['limit'] = '0';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['operator'] = '!=';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $export['location_county'] = $view;

  $view = new view();
  $view->name = 'location_state';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Location State';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Location ID */
  $handler->display->display_options['fields']['field_location_id']['id'] = 'field_location_id';
  $handler->display->display_options['fields']['field_location_id']['table'] = 'field_data_field_location_id';
  $handler->display->display_options['fields']['field_location_id']['field'] = 'field_location_id';
  $handler->display->display_options['fields']['field_location_id']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_location_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Contextual filter: Taxonomy term: Location ID (field_location_id) */
  $handler->display->display_options['arguments']['field_location_id_value']['id'] = 'field_location_id_value';
  $handler->display->display_options['arguments']['field_location_id_value']['table'] = 'field_data_field_location_id';
  $handler->display->display_options['arguments']['field_location_id_value']['field'] = 'field_location_id_value';
  $handler->display->display_options['arguments']['field_location_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_location_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_location_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_location_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_location_id_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $export['location_state'] = $view;

  return $export;
}
