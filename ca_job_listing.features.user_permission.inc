<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_job_listing_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_job_listings content
  $permissions['create ca_job_listings content'] = array(
    'name' => 'create ca_job_listings content',
    'roles' => array(
      '0' => 'job lister',
      '1' => 'job listing admin',
    ),
  );

  // Exported permission: delete any ca_job_listings content
  $permissions['delete any ca_job_listings content'] = array(
    'name' => 'delete any ca_job_listings content',
    'roles' => array(
      '0' => 'job listing admin',
    ),
  );

  // Exported permission: delete own ca_job_listings content
  $permissions['delete own ca_job_listings content'] = array(
    'name' => 'delete own ca_job_listings content',
    'roles' => array(
      '0' => 'job lister',
      '1' => 'job listing admin',
    ),
  );

  // Exported permission: edit any ca_job_listings content
  $permissions['edit any ca_job_listings content'] = array(
    'name' => 'edit any ca_job_listings content',
    'roles' => array(
      '0' => 'job listing admin',
    ),
  );

  // Exported permission: edit own ca_job_listings content
  $permissions['edit own ca_job_listings content'] = array(
    'name' => 'edit own ca_job_listings content',
    'roles' => array(
      '0' => 'job lister',
      '1' => 'job listing admin',
    ),
  );

  return $permissions;
}
