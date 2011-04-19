<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ccrm_case_study_imagecache_default_presets() {
  $items = array(
    'ccrm_cs_gallery' => array(
      'presetname' => 'ccrm_cs_gallery',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '620',
            'height' => '400',
          ),
        ),
      ),
    ),
    'ccrm_cs_logo' => array(
      'presetname' => 'ccrm_cs_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '200',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ccrm_cs_thumbnail' => array(
      'presetname' => 'ccrm_cs_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '120',
            'height' => '120',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ccrm_case_study_node_info() {
  $items = array(
    'ccrm_case_study' => array(
      'name' => t('Case Study'),
      'module' => 'features',
      'description' => t('To best illustrate the power of CiviCRM, we would like to invite you (and your clients) to contribute casestudies to be featured on the CiviCRM Web site.
'),
      'has_title' => '1',
      'title_label' => t('The name of the organization this case study is about:'),
      'has_body' => '1',
      'body_label' => t('Please describe the organization and summarize how this project successfully met their needs: '),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ccrm_case_study_views_api() {
  return array(
    'api' => '2',
  );
}
