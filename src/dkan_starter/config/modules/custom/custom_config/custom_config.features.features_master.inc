<?php
/**
 * @file
 * custom_config.features.features_master.inc
 */

/**
 * Implements hook_features_master_defaults().
 */
function custom_config_features_master_defaults() {
  module_load_include('module', 'data_config');

  $features_master = data_config_enabled_modules();

  // Add and remove modules where necessary.
  unset($features_master['modules']['example']);

  // OpenDataStack and related modules.
  $features_master['modules'] = array_merge(
    $features_master['modules'],
    array(
      'dkan_opendatastack_elasticsearch' => 'dkan_opendatastack_elasticsearch',
      'jsonb' => 'jsonb',
      'dkan_opendatastack_kibana' => 'dkan_opendatastack_kibana',
    ));

  return $features_master;
}
