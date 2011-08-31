<?php

/**
 * @file
 * Provides the administration settings for the x-check.
 */

/**
 * Implements hook_form().
 */
function xcheck_admin_settings() {
  $form = array();
  $form['contact'] = array(
    '#value' => t("If you have any questions, please don't hesitate to ") . l(t('contact us'), 'https://x-check.de'),
  );
  $form['account'] = array(
    '#type' => 'fieldset',
    '#title' => t('Account Settings'),
  );
  $form['account']['xcheck_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Website ID'),
    '#description' => t('Warning: Do not change unless you know what you are doing.'),
    '#default_value' => variable_get('xcheck_id', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

