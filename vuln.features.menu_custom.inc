<?php
/**
 * @file
 * vuln.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vuln_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-vuln
  $menus['menu-vuln'] = array(
    'menu_name' => 'menu-vuln',
    'title' => '<script type="text/javascript">alert("Vuln - menu:title!");</script>Vuln',
    'description' => '<script type="text/javascript">alert("Vuln - menu:description!");</script>Vuln',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<script type="text/javascript">alert("Vuln - menu:description!");</script>Vuln');
  t('<script type="text/javascript">alert("Vuln - menu:title!");</script>Vuln');


  return $menus;
}
