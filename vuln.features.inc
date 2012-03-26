<?php
/**
 * @file
 * vuln.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vuln_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function vuln_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vuln_node_info() {
  $items = array(
    'vuln_content2' => array(
      'name' => t('vuln-content2'),
      'base' => 'node_content',
      'description' => t('vuln-content2 description'),
      'has_title' => '1',
      'title_label' => t('vuln-content2 title'),
      'help' => t('vuln-content2 explaination'),
    ),
  );
  return $items;
}
