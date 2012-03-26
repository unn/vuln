<?php
/**
 * @file
 * vuln.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vuln_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'vuln_view';
  $view->description = '<script type="text/javascript">alert("Vuln - view:description");</script>';
  $view->tag = '<script type="text/javascript">alert("Vuln - view:tag");</script>';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<script type="text/javascript">alert("Vuln - View:title");</script>';
  $handler->display->display_options['use_more_text'] = '<script type="text/javascript">alert("Vuln - view:use_more_text");</script>';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = FALSE;
  $handler->display->display_options['header']['text']['content'] = '<script type="text/javascript">alert("Vuln - View:header");</script>';
  $handler->display->display_options['header']['text']['format'] = '1';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['empty'] = FALSE;
  $handler->display->display_options['footer']['text']['content'] = '<script type="text/javascript">alert("Vuln - View:footer");</script>';
  $handler->display->display_options['footer']['text']['format'] = '1';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = '<script type="text/javascript">alert("Vuln - View:empty");</script>';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<script type="text/javascript">alert("Vuln - view:fields:text");</script>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '<script type="text/javascript">alert("Vuln - view:fields:label");</script>';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['empty'] = '<script type="text/javascript">alert("Vuln - view:fields:empty");</script>';
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = '<script type="text/javascript">alert("Vuln - view:filters:label");</script>';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = '<script type="text/javascript">alert("Vuln - view:filters:identifier");</script>';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;

  /* Display: <script type="text/javascript">alert("Vuln - view:page");</script> */
  $handler = $view->new_display('page', '<script type="text/javascript">alert("Vuln - view:page");</script>', 'page_1');
  $handler->display->display_options['path'] = 'vuln-view';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '<script type="text/javascript">alert("Vuln - view:menu:title");</script>Vuln';
  $handler->display->display_options['menu']['description'] = '<script type="text/javascript">alert("Vuln - view:menu:description");</script>Vuln';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'features';

  /* Display: <script type="text/javascript">alert("Vuln - view:block");</script> */
  $handler = $view->new_display('block', '<script type="text/javascript">alert("Vuln - view:block");</script>', 'block_1');
  $handler->display->display_options['block_description'] = '<script type="text/javascript">alert("Vuln - view:block_description");</script>';
  $export['vuln_view'] = $view;

  return $export;
}
