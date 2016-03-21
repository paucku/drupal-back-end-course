<?php

function menu_homework_message_date_settings_form($form, $form_state){
    $form['menu_homework_message_date_enable_message'] = array(
        '#type' => 'checkbox',
        '#title' => t('Enable current date message.'),
        '#default_value' => variable_get('menu_homework_message_date_enable_message', 1),
    );
    $form['menu_homework_message_date_type'] = array(
        '#type' => 'select',
        '#title' => t('Message type'),
        '#options' => drupal_map_assoc(array(t('status'), t('warning'), t('error'))),
        '#default_value' => variable_get('menu_homework_message_date_type'),
    );
    return system_settings_form($form);
}


function menu_homework_message_date_advanced_settings_form($form, $form_state){
    $form['menu_homework_message_date_show_anonymous'] = array(
        '#type' => 'checkbox',
        '#title' => t('Show for anonymous users.'),
        '#default_value' => variable_get('menu_homework_message_date_show_anonymous'),
    );

    return system_settings_form($form);
}