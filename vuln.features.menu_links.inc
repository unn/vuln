<?php
/**
 * @file
 * vuln.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function vuln_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/vuln-content
  $menu_links['navigation:node/add/vuln-content'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/vuln-content',
    'router_path' => 'node/add/vuln-content',
    'link_title' => '<script type="text/javascript">alert("Vuln - node:name");</script>Vuln',
    'options' => array(
      'attributes' => array(
        'title' => '<script type="text/javascript">alert("Vuln - node:description");</script>',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<script type="text/javascript">alert("Vuln - node:name");</script>Vuln');


  return $menu_links;
}
