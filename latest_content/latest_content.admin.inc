<?php


function latest_content_admin_settings_form($form, &$form_state){
  $form['latest_content_default_count'] = array(
    '#type' => 'textfield',
    '#title' => t('How many latest content to show by default'),
    '#default_value' => variable_get('latest_content_default_count', 10),
    '#size' => 5,
    '#maxlength' => 5,
  );
  
  return system_settings_form($form);
}