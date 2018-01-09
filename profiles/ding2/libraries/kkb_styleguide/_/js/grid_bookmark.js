(function($) {
    $(document).ready(function() {
        
        var vgrid = '<div id="vgrid" style="position: absolute;z-index: 100000;height: '+$(document).height()+'px;width: 100%; display:none; background: -webkit-gradient(linear, left top, left bottom, color-stop(0%, rgba(255, 0, 0, 0.1)), color-stop(50%, rgba(255, 0, 0, 0.1)), color-stop(50%, rgba(255, 0, 0, 0)), color-stop(100%, rgba(255, 0, 0, 0)));background: -webkit-linear-gradient(top, rgba(255, 0, 0, 0.1) 0%, rgba(255, 0, 0, 0.1) 50%, rgba(255, 0, 0, 0) 50%, rgba(255, 0, 0, 0));background: linear-gradient(to bottom,rgba(255, 0, 0, 0.1) 0%, rgba(255, 0, 0, 0.1) 50%, rgba(255, 0, 0, 0) 50%, rgba(255, 0, 0, 0));background-size: auto 24px; background-position: left 0px;pointer-events: none;"><div id="vgrid-box" style="background: rgba(0,0,0,0.5);color: white;font-family: monospace;font-size: 11px;padding: 5px;display: inline-block;position: fixed;top: 0px;left: 0px;"></div></div>';
        var bgrid = '<div id="bgrid" style="position:fixed;left:0px;top:0px;width:100%;height:100%;z-index:10000;overflow:hidden;pointer-events: none; display:none;"><div class="container"><div class="row"><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div><div class="col-sm-1 hidden-xs"><div style="height:2000px;background-color:rgba(0,0,255,0.1)"></div></div></div></div></div>'
        $('body').prepend(bgrid);
        $('body').prepend(vgrid);
        
        var $grid = $("#vgrid"),
            $bgrid = $("#bgrid"),
            $box = $("#vgrid-box", $grid),
            down = [],
            show = false,
            bshow = false,
            display = "none",
            size = 12,
            top = 0;
        
        $box.html("top: "+top+"px gridsize: "+ size +"px");
        
        
        $(document).keydown(function(e) {
            down[e.keyCode] = true;
        }).keyup(function(e) {
            if (down[16] && down[38])top--;
            if (down[16] && down[40])top++;
            if (down[16] && down[39])size++;
            if (down[16] && down[37])size--;
            if (down[16] && down[86]) {
                show = !show;
                if (show) {
                    display = "block";
                } else {
                    display = "none";
                }
            }
            if(down[16] && down[66]){
                bshow = !bshow;
                if(!bshow){
                    $bgrid.css({"display": "none"});    
                }else{
                    $bgrid.css({"display": "block"});
                }
            }

            $grid.css({
                "background-size": "auto " + size + "px",
                "background-position": "left " + top + "px",
                "display": display
            });
            
            $box.html("top: "+top+"px gridsize: "+ size +"px");
            down[e.keyCode] = false;
        });
    })
})(jQuery)



/*
    http://subsimple.com/bookmarklets/jsbuilder.htm
    http://jscompress.com/
 */
