<?php
/**
 * @file
 * vuln.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function vuln_user_default_permissions() {
  $permissions = array();

  // Exported permission: create vuln_content content
  $permissions['create vuln_content content'] = array(
    'name' => 'create vuln_content content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any vuln_content content
  $permissions['delete any vuln_content content'] = array(
    'name' => 'delete any vuln_content content',
    'roles' => array(),
  );

  // Exported permission: delete own vuln_content content
  $permissions['delete own vuln_content content'] = array(
    'name' => 'delete own vuln_content content',
    'roles' => array(),
  );

  // Exported permission: edit any vuln_content content
  $permissions['edit any vuln_content content'] = array(
    'name' => 'edit any vuln_content content',
    'roles' => array(),
  );

  // Exported permission: edit own vuln_content content
  $permissions['edit own vuln_content content'] = array(
    'name' => 'edit own vuln_content content',
    'roles' => array(),
  );

  return $permissions;
}
