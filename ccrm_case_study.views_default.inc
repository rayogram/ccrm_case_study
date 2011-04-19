<?php

/**
 * Implementation of hook_views_default_views().
 */
function ccrm_case_study_views_default_views() {
  $views = array();

  // Exported view: cccrm_cs_filter
  $view = new view;
  $view->name = 'cccrm_cs_filter';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_ccrm_cs_logo_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'label_type' => 'none',
      'format' => 'ccrm_cs_thumbnail_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ccrm_cs_logo_fid',
      'table' => 'node_data_field_ccrm_cs_logo',
      'field' => 'field_ccrm_cs_logo_fid',
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'teaser' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'ccrm_case_study' => 'ccrm_case_study',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_ccrm_cs_features_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_ccrm_cs_features_value_many_to_one_op',
        'identifier' => 'field_ccrm_cs_features_value_many_to_one',
        'label' => 'Features Deployed',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_ccrm_cs_features_value_many_to_one',
      'table' => 'node_data_field_ccrm_cs_features',
      'field' => 'field_ccrm_cs_features_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_ccrm_cs_expertise_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_ccrm_cs_expertise_value_many_to_one_op',
        'identifier' => 'field_ccrm_cs_expertise_value_many_to_one',
        'label' => 'Area of Expertise',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_ccrm_cs_expertise_value_many_to_one',
      'table' => 'node_data_field_ccrm_cs_expertise',
      'field' => 'field_ccrm_cs_expertise_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'field_ccrm_cs_org_type_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_ccrm_cs_org_type_value_many_to_one_op',
        'identifier' => 'field_ccrm_cs_org_type_value_many_to_one',
        'label' => 'Kind of organization',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_ccrm_cs_org_type_value_many_to_one',
      'table' => 'node_data_field_ccrm_cs_org_type',
      'field' => 'field_ccrm_cs_org_type_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'case-studies');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('style_plugin', 'gmap');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'macro' => '[gmap ]',
    'datasource' => 'location',
    'latfield' => 'field_ccrm_cs_logo_fid',
    'lonfield' => 'field_ccrm_cs_logo_fid',
    'markers' => 'static',
    'markerfield' => 'field_ccrm_cs_logo_fid',
    'markertype' => 'small green',
    'center_on_nodearg' => 0,
    'center_on_nodearg_arg' => '',
    'highlight_nodearg' => 0,
    'highlight_nodearg_arg' => '',
    'highlight_nodearg_color' => '#FF0000',
    'tooltipenabled' => 0,
    'tooltipfield' => 'field_ccrm_cs_logo_fid',
  ));
  $handler->override_option('attachment_position', 'before');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', FALSE);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
