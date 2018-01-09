(function($, Modernizr){
    
    var current;
    
    $(document).ready(function(){
        
        var $navItem = $(".calendar-nav a"),
            $calendarWeekday = $(".calendar-weekday"),
            $calendarContent = $('.calendar-content'),
            $calendarContentWrap = $('.calendar-content-wrap'),
            timer = 0;
        
        current = 0;
        addActive($navItem, current);
        changeContent($calendarContent, $calendarContentWrap,  $calendarWeekday,  current);
        
        
        
        $navItem.click(function(e){
            
            e.preventDefault();
            var i = $navItem.index(this);
            current = i;
            removeActive($navItem);
            addActive($navItem, current);
            changeContent($calendarContent, $calendarContentWrap,  $calendarWeekday,  current);
        })
        
        $(window).resize(function(){
            
            if(!$calendarContent.hasClass("resizing")) $calendarContent.addClass("resizing");
            changeContent($calendarContent, $calendarContentWrap,  $calendarWeekday,  current); 
            
            clearTimeout(timer);
            timer = setTimeout(function () {
                if($calendarContent.hasClass("resizing")) $calendarContent.removeClass("resizing");
            }, 200);  
        })
        
    })
    
    
    function removeActive(items){
        $.each(items, function(i,el){
            var $el = $(el);
            if($el.hasClass("active")) $el.removeClass("active");
        })
    }
    
    function addActive(items, i){
       $(items[i]).addClass("active"); 
    }
    
    function changeContent(container, wrap, content, index){
        var $content = $(content[index]);
        
        var pos = $content.position().top;
        var height = $content.outerHeight();
        
        wrap.css({
            "top": "-" + pos + "px"
        })
        
        container.css({
            "height": height + "px"
        })
        
        if(!Modernizr.csscalc){
            container.css('width', '100%').css('width', '-=81px');    
        }
    }
    
}(jQuery, Modernizr))