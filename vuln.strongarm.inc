<?php
/**
 * @file
 * vuln.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vuln_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_vuln_content2';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_vuln_content2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_vuln_content2';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_vuln_content2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_vuln_content2';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_vuln_content2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_vuln_content2';
  $strongarm->value = '1';
  $export['node_preview_vuln_content2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_vuln_content2';
  $strongarm->value = 1;
  $export['node_submitted_vuln_content2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_footer");</script>';
  $export['site_footer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mission';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_mission");</script>';
  $export['site_mission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = '7head.local';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '<script type="text/javascript">alert("Vuln - strongarm:site_slogan");</script>Don\'t get p0wned';
  $export['site_slogan'] = $strongarm;

  return $export;
}
