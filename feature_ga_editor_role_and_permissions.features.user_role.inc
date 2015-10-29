<?php
/**
 * @file
 * feature_ga_editor_role_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_ga_editor_role_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  return $roles;
}
