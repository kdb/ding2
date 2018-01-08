<?php
/**
 * @file
 * Template file.
 *
 * @param $enabled  true or false.
 * @param $link  link href.
 * @param $target  link target.
 * @param $class  array of classes to apply to anchor tag.
 * @param $align  left or right.
 * @param $top  distance from the top; include unit.
 * @param $image  image href.
 * @param $alt  image alt text.
 * @param $deny  paths to hide.
 * @param $allow  paths to show.
 * // Computed from image.
 * @param $height  image height in pixels.
 * @param $width  image width in pixels.
 */
?>
<?php if ($enabled): ?>
<div id='feedback_simple'>
  <a
    href='<?php print $link ?>'
    target='<?php print $target ?>'
    class='feedback_simple-<?php print $align ?> feedback_simple-<?php print $text_image; ?> feedback-<?php print $direction; ?> <?php print implode(' ', $class) ?>'
    style='top: <?php print $top ?>;'>
      <?php if ($text_image == 'image'): ?>
        <img
        alt='<?php print $alt ?>'
        src='<?php print $image ?>'
        height='<?php print $height ?>'
        width='<?php print $width ?>' />
      <?php else: ?>
        <div><?php print $text; ?></div>
      <?php endif; ?>
  </a>
</div>
<?php endif;
