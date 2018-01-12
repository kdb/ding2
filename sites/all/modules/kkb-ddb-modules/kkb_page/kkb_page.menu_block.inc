<?php
/**
 * @file
 * kkb_page.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function kkb_page_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'content_menu';
  $menu_block->label = 'Content menu';
  $menu_block->description = '';
  $menu_block->depth = 0;
  $menu_block->expanded = 1;
  $menu_block->follow = '0';
  $menu_block->level = 2;
  $menu_block->parent = 'content-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['content_menu'] = $menu_block;

  return $export;
}
