<?php
/**
 * @file
 * site_notifications.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function site_notifications_user_default_roles() {
  $roles = array();

  // Exported role: Notification Editor.
  $roles['Notification Editor'] = array(
    'name' => 'Notification Editor',
    'weight' => 3,
  );

  return $roles;
}
