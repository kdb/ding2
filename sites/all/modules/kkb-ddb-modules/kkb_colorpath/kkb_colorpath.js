
/**
 * @file
 * Attaches behaviors for the Colorpath module.
 */

(function ($) {

  Drupal.behaviors.colorpathFieldsetSummaries = {
    attach: function (context) {
      $('fieldset.colorpath-form', context).drupalSetSummary(function (context) {
        var color = $('.form-item-colorpath-color select option:selected').text();
        console.log(color);

        return color ?
          Drupal.t('Color: @color', { '@color': color }) :
          Drupal.t('No color selected');
      });
    }
  };
1
})(jQuery);
