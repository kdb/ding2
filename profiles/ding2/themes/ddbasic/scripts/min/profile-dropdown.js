!function($){"use strict";function e(){return $(".js-mobile-user-menu .navigation-inner > .main-menu-third-level")}Drupal.behaviors.profile_dropdown={attach:function(s,o){var i=$("a.topbar-link-user-account",s),n=$("body");0!==i.length&&(i.on("click",function(e){ddbasic.breakpoint.is("tablet")&&(e.preventDefault(),n.toggleClass("mobile-usermenu-is-open"),n.removeClass("mobile-menu-is-open pane-login-is-open mobile-search-is-open"),n.hasClass("mobile-usermenu-is-open")?n.addClass("overlay-is-active"):n.removeClass("overlay-is-active"))}),i.on("mouseenter",function(){ddbasic.breakpoint.is("tablet")||(e().css({left:i.position().left-(e().width()-i.width())}),n.addClass("mobile-usermenu-is-open"),i.addClass("js-active active"),e().on("mouseleave.profiledropdown",function(){ddbasic.breakpoint.is("tablet")||(e().css("left",""),n.removeClass("mobile-usermenu-is-open"),i.removeClass("js-active active"),e().off("mouseleave.profiledropdown"))}))}),i.on("mouseleave",function(s){ddbasic.breakpoint.is("tablet")||(s.offsetX<0||s.offsetX>$(this).width())&&(e().css("left",""),n.removeClass("mobile-usermenu-is-open"),i.removeClass("js-active active"),e().off("mouseleave.profiledropdown"))}))}}}(jQuery);