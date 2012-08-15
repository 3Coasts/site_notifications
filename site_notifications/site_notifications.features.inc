<?php
/**
 * @file
 * site_notifications.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function site_notifications_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function site_notifications_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_notifications_node_info() {
  $items = array(
    'site_notification' => array(
      'name' => t('Site Notification'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => t('Site notifications display in an alert area on every page of the site.  These are meant for notifying clients of office closures, site difficulties, changes, etc.  Multiple notifications can be displayed at once.  All site notifications that are <em>published</em> will display.  To remove a site notification from display, either delete the content item or set it to <em>unpublished</em>.

<strong>The default status of new Site Notifications is <em>unpublished</em>.  To enable the notification for display, you must change the status to <em>published</em>.</strong>'),
    ),
  );
  return $items;
}
