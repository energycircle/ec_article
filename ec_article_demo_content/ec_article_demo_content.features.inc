<?php
/**
 * @file
 * ec_article_demo_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ec_article_demo_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
