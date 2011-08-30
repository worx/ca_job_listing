<?php

/**
 * Define the function ca_job_listing_admin_settings_form().
 *
 * This function will create the admin settings page.
 */
function ca_job_listing_admin_settings_form() {
  $form = array();

  $form['job_listing_list'] = array(
    '#type' => 'select',
    '#title' => t('Job Listing\'s List Template'),
    '#options' => array(
      'ca_job_listing_list_template_one' => t('Template One'),
      'ca_job_listing_list_template_two' => t('Template Two'),
      'ca_job_listing_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_job_listing_list_template', 'ca_job_listing_list_template_one'),
    '#required' => TRUE,
  );
  $form['job_listing_node'] = array(
    '#type' => 'select',
    '#title' => t('Job Listing\'s Node Template'),
    '#options' => array(
      'ca_job_listing_node_template_one' => t('Template One'),
      'ca_job_listing_node_template_two' => t('Template Two'),
      'ca_job_listing_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_job_listing_node_template', 'ca_job_listing_node_template_one'),
    '#required' => TRUE,
  );
  $form['job_listing_vocab'] = array(
    '#type' => 'select',
    '#title' => t('Job Listing\'s Vocab Template'),
    '#options' => array(
      'ca_job_listing_vocab_template_one' => t('Template One'),
      'ca_job_listing_vocab_template_two' => t('Template Two'),
      'ca_job_listing_vocab_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_job_listing_vocab_template', 'ca_job_listing_vocab_template_one'),
    '#required' => TRUE,
  );
  $form['job_listing_read_all_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Job Listing\'s Block\'s Read All Link Path'),
    '#default_value' => variable_get('ca_job_listing_read_all_path', ''),
  );
  $form['job_listing_read_all_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Job Listing\'s Block\'s Read All Link Text'),
    '#default_value' => variable_get('ca_job_listing_read_all_text', ''),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_job_listing_admin_settings_form_submit'),
  );

  return $form;
}

/*
 * Define the function ca_job_listing_admin_settings_form_submit().
 *
 * This function will save the admin settings page.
 */
function ca_job_listing_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_job_listing_list_template', $form_state['values']['job_listing_list']);
  variable_set('ca_job_listing_node_template', $form_state['values']['job_listing_node']);
  variable_set('ca_job_listing_vocab_template', $form_state['values']['job_listing_vocab']);
  variable_set('ca_job_listing_read_all_path', $form_state['values']['job_listing_read_all_path']);
  variable_set('ca_job_listing_read_all_text', $form_state['values']['job_listing_read_all_text']);
  drupal_set_message('Configuration has been saved.');
}
