<?php

/**
 * @file
 * Lists available colors and color schemes for the Monlam theme.
 */

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background top'),
    'bottom' => t('Header background bottom'),
    'bg' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'sidebarborders' => t('Sidebar borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'active' => t('Active item color'),
    //'base' => t('Base color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Monlam Red (default)'),
      'colors' => array(
        'top' => '#8c0a03',
        'bottom' => '#810800',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#eaa104',
//        'active' => '#fefefe',
        //'base' => '#eaa104',
      ),
    ),
    'firehouse' => array(
      'title' => t('Firehouse'),
      'colors' => array(
        'top' => '#cd2d2d',
        'bottom' => '#d64e4e',
        'bg' => '#ffffff',
        'sidebar' => '#f1f4f0',
        'sidebarborders' => '#ededed',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#888888',
        'link' => '#d6121f',
//        'active' => '#fefefe',
        //'base' => '#eaa104',
      ),
    ),
    'bartik' => array(
      'title' => t('Blue Lagoon (default)'),
      'colors' => array(
        'top' => '#055a8e',
        'bottom' => '#1d84c3',
        'bg' => '#ffffff',
        'sidebar' => '#f6f6f2',
        'sidebarborders' => '#f9f9f9',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#0071B3',
//        'active' => '#fefefe',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(
    'logo.svg',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Preview files.
  'preview_library' => 'monlam/color.preview',
  'preview_html' => 'color/preview.html',

  // Attachments.
  '#attached' => [
    'drupalSettings' => [
      'color' => [
        // Put the logo path into JavaScript for the live preview.
        'logo' => theme_get_setting('logo.url', 'monlam'),
      ],
    ],
  ],
);
