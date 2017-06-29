<?php

/**
 * @file
 * Administration page callbacks for custom block inline module.
 */


function custom_block_inline_admin_config_form() {

  $form['custom_block_inline_quantity_blocks'] = array(
    '#type' => 'textfield',
    '#title' => t('Quantity block'),
    '#default_value' => variable_get('custom_block_inline_quantity_blocks', 2),
    '#element_validate' => array('element_validate_number'),
  );

  return system_settings_form($form);
}