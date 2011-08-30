<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_job_listing_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ca_job_listing_node_info() {
  $items = array(
    'ca_job_listings' => array(
      'name' => t('Job Listings'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Job Title'),
      'has_body' => '1',
      'body_label' => t('Job  Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_job_listing_views_api() {
  return array(
    'api' => '2',
  );
}
