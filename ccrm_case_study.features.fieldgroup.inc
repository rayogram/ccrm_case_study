<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ccrm_case_study_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_ccrm_cs_testimonial_group1
  $groups['ccrm_case_study-group_ccrm_cs_testimonial_group1'] = array(
    'group_type' => 'standard',
    'type_name' => 'ccrm_case_study',
    'group_name' => 'group_ccrm_cs_testimonial_group1',
    'label' => 'Client Testimonial #1',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '13',
    'fields' => array(
      '0' => 'field_ccrm_cs_testimonial_name_1',
      '1' => 'field_ccrm_cs_testimonial_titl_1',
      '2' => 'field_ccrm_cs_testimonial_body_1',
    ),
  );

  // Exported group: group_ccrm_cs_testimonial_group2
  $groups['ccrm_case_study-group_ccrm_cs_testimonial_group2'] = array(
    'group_type' => 'standard',
    'type_name' => 'ccrm_case_study',
    'group_name' => 'group_ccrm_cs_testimonial_group2',
    'label' => 'Client Testimonial #2',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '14',
    'fields' => array(
      '0' => 'field_ccrm_cs_testimonial_name_2',
      '1' => 'field_ccrm_cs_testimonial_titl_2',
      '2' => 'field_ccrm_cs_testimonial_body_2',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Client Testimonial #1');
  t('Client Testimonial #2');

  return $groups;
}
