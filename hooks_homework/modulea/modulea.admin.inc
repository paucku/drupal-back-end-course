<?php

/**
 * @file
 * Administration functions and forms for the Modulea module.
 */

/**
 * Form constructor for the modulea settings form.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function modulea_admin_settings($form, &$form_state) {
  $form['modulea_config_text'] = array(
    '#markup' => variable_get('modulea_config_text', ''),
  );

  $form['modulea_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Page Title'),
    '#default_value' => variable_get('modulea_title', 'My Module'),
    '#size' => 60,
    '#maxlength' => 256,
  );

  return system_settings_form($form);
}
