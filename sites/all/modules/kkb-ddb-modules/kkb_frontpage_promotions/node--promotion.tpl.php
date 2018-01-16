<?php hide($content['field_background_image']); ?>
<?php hide($content['field_indentation']); ?>
<div class="<?php print $classes; ?>">
  <div class="promotion-bg" <?php if (!empty($bg_style)) { print $bg_style; } ?>></div>
  <div class="promotion-inner" <?php if (!empty($indentation_style)) { print $indentation_style; } ?>>
    <h2 class="title color-text font-display-large"><?php print $title; ?></h2>
    <?php print render($content); ?>
  </div>
</div>