<?php
/**
 * @file
 * dkan_dataset_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_dataset_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|dataset|default';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_author',
      1 => 'field_conforms_to',
      2 => 'field_contact_email',
      3 => 'field_contact_name',
      4 => 'field_data_dictionary',
      5 => 'field_data_dictionary_type',
      6 => 'field_frequency',
      7 => 'field_granularity',
      8 => 'field_is_part_of',
      9 => 'field_landing_page',
      10 => 'field_language',
      11 => 'field_license',
      12 => 'field_pod_theme',
      13 => 'field_public_access_level',
      14 => 'field_rights',
      15 => 'field_spatial',
      16 => 'field_spatial_geographical_cover',
      17 => 'field_temporal_coverage',
      18 => 'og_group_ref',
      19 => 'release_date',
      20 => 'modified_date',
      21 => 'identifier',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Dataset Info',
      'instance_settings' => array(
        'label' => 'hide',
        'desc' => '<div class="fieldset-description"><i class="icon-large icon-info-sign"></i>These fields are compatible with <a href="http://www.w3.org/TR/vocab-dcat/">DCAT</a>, an RDF vocabulary designed to facilitate interoperability between data catalogs published on the Web.</div>',
        'first_column' => 'Field',
        'second_column' => 'Value',
        'cells' => 'empty',
        'classes' => ' group-additional field-group-table',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|dataset|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_additional_info',
      1 => 'field_author',
      2 => 'field_conforms_to',
      3 => 'field_contact_email',
      4 => 'field_contact_name',
      5 => 'field_data_dictionary',
      6 => 'field_data_dictionary_type',
      7 => 'field_frequency',
      8 => 'field_granularity',
      9 => 'field_harvest_source_issued',
      10 => 'field_harvest_source_modified',
      11 => 'field_is_part_of',
      12 => 'field_landing_page',
      13 => 'field_language',
      14 => 'field_pod_theme',
      15 => 'field_public_access_level',
      16 => 'field_related_content',
      17 => 'field_resources',
      18 => 'field_rights',
      19 => 'field_spatial',
      20 => 'field_spatial_geographical_cover',
      21 => 'field_temporal_coverage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dataset Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-additional field-group-fieldset',
        'description' => '<i class="icon-large icon-info-sign"></i>These fields are compatible with <a href="http://www.w3.org/TR/vocab-dcat/">DCAT</a>, an RDF vocabulary designed to facilitate interoperability between data catalogs published on the Web. These fields are also compatible with the Common Core metadata schema from <a href="http://project-open-data.github.io/schema/">Project Open Data</a>.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|resource|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource',
    'weight' => '2',
    'children' => array(
      0 => 'group_link_api',
      1 => 'group_link_file',
      2 => 'group_upload',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Resource',
      'instance_settings' => array(
        'classes' => ' group-data field-group-htabs',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_api|node|resource|form';
  $field_group->group_name = 'group_link_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'API or Website URL',
    'weight' => '11',
    'children' => array(
      0 => 'field_link_api',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'API or Website URL',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_api group-link-api field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_file|node|resource|form';
  $field_group->group_name = 'group_link_file';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Remote file',
    'weight' => '12',
    'children' => array(
      0 => 'field_link_remote_file',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Remote file',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_file group-link-file field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|dataset|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_license',
      2 => 'field_tags',
      3 => 'og_group_ref',
      4 => 'field_topic',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Primary',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-primary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upload|node|resource|form';
  $field_group->group_name = 'group_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Upload',
    'weight' => '9',
    'children' => array(
      0 => 'field_upload',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Upload',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_upload group-upload field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('API or Website URL');
  t('Dataset Info');
  t('Dataset Information');
  t('Primary');
  t('Remote file');
  t('Resource');
  t('Upload');

  return $field_groups;
}
