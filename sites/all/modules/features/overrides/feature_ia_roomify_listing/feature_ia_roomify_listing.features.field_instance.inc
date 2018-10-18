<?php
/**
 * @file
 * feature_ia_roomify_listing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_ia_roomify_listing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-property_type-name_field'.
  $field_instances['taxonomy_term-property_type-name_field'] = array(
    'bundle' => 'property_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Name');

  return $field_instances;
}