<?php

/**
 * @file
 * Display faq question nodes.
 */
?>
<article class="<?php print $classes; ?> node-full"<?php print $attributes; ?>>
  <div class="inner">
    <?php print render($content['field_ding_faq_category']); ?>
    <h1><?php print $title; ?></h1>
    <?php print render($content); ?>
    <div class="buttons">
      <?php print l(t('FAQ'), 'faq'); ?>
    </div>
  </div>
</article>
