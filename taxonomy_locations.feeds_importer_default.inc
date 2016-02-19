<?php
/**
 * @file
 * taxonomy_locations.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function taxonomy_locations_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'location_cities';
  $feeds_importer->config = array(
    'name' => 'Location Cities',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'location_code',
            'target' => 'field_location_code',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'census_code',
            'target' => 'field_location_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'census_code',
            'target' => 'field_census_code',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'feature_name',
            'target' => 'field_location_name',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'feature_id',
            'target' => 'field_feature_id',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'feature_suffix',
            'target' => 'field_location_suffix',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'term_name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'location_parent',
            'target' => 'parenttid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'location',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['location_cities'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'location_counties';
  $feeds_importer->config = array(
    'name' => 'Location Counties',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'location_code',
            'target' => 'field_location_code',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'state_id',
            'target' => 'parenttid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'county_id',
            'target' => 'field_location_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'census_code',
            'target' => 'field_census_code',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'feature_name',
            'target' => 'field_location_name',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'feature_id',
            'target' => 'field_feature_id',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'feature_suffix',
            'target' => 'field_location_suffix',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'term_name',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'location',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['location_counties'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'state_locations';
  $feeds_importer->config = array(
    'name' => 'State Locations',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'state_id',
            'target' => 'field_location_id',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'state_code',
            'target' => 'field_location_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'state',
            'target' => 'name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'location',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['state_locations'] = $feeds_importer;

  return $export;
}
