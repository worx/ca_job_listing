<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_job_listing_user_default_roles() {
  $roles = array();

  // Exported role: job listing administrator
  $roles['job listing administrator'] = array(
    'name' => 'job listing administrator',
  );

  // Exported role: job lister
  $roles['job lister'] = array(
    'name' => 'job lister',
  );

  return $roles;
}
