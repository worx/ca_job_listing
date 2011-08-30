<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_job_listing_user_default_roles() {
  $roles = array();

  // Exported role: job lister
  $roles['job lister'] = array(
    'name' => 'job lister',
  );

  // Exported role: job listing admin
  $roles['job listing admin'] = array(
    'name' => 'job listing admin',
  );

  return $roles;
}
