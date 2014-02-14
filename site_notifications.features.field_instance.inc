<?php
/**
 * @file
 * site_notifications.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function site_notifications_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-site_notification-body'
  $field_instances['node-site_notification-body'] = array(
    'bundle' => 'site_notification',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Message',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-site_notification-field_notification_type'
  $field_instances['node-site_notification-field_notification_type'] = array(
    'bundle' => 'site_notification',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<ul><li>Alerts display in a red box with a red X.</li>
<li>Warnings display in a yellow box with a yellow exclamation mark.</li>
<li>Notifications display in a blue box with a blue information icon.</li></ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_notification_type',
    'label' => 'Notification Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<ul><li>Alerts display in a red box with a red X.</li>
<li>Warnings display in a yellow box with a yellow exclamation mark.</li>
<li>Notifications display in a blue box with a blue information icon.</li></ul>');
  t('Message');
  t('Notification Type');

  return $field_instances;
}
