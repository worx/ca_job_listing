<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_job_listing_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_job_listings';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '4',
    'author' => '3',
    'options' => '5',
    'menu' => '2',
    'taxonomy' => '-2',
    'path' => '6',
  );

  $export['content_extra_weights_ca_job_listings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_job_listings';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_ca_job_listings'] = $strongarm;
  return $export;
}
