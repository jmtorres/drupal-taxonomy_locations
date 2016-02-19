<?php
/**
 * @file
 * taxonomy_locations.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function taxonomy_locations_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'location_cities-location_parent-string2id';
  $feeds_tamper->importer = 'location_cities';
  $feeds_tamper->source = 'location_parent';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'views',
    'views' => array(
      'view' => 'location_county:default',
    ),
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['location_cities-location_parent-string2id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'location_cities-term_name-rewrite';
  $feeds_tamper->importer = 'location_cities';
  $feeds_tamper->source = 'term_name';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[feature_name] ([feature_suffix])',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['location_cities-term_name-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'location_counties-state_id-string2id';
  $feeds_tamper->importer = 'location_counties';
  $feeds_tamper->source = 'state_id';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'views',
    'views' => array(
      'view' => 'location_state:default',
    ),
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['location_counties-state_id-string2id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'location_counties-term_name-rewrite';
  $feeds_tamper->importer = 'location_counties';
  $feeds_tamper->source = 'term_name';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => '[feature_name] [feature_suffix]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['location_counties-term_name-rewrite'] = $feeds_tamper;

  return $export;
}
