$(document).ready(function(){
    var fr = new FakeResponsive();
//            fr.add( $('.g6-1.responsive')[0] );
//            fr.add( $('.g6-7.responsive')[0] );
//            fr.add( $('.g4-1.responsive')[0] );
//            fr.add( $('.g4-5.responsive')[0] );
//            fr.add( $('.g4-1.responsive')[1] );
//            fr.add( $('.g4-5.responsive')[1] );
    
    fr.start();
    
    window.fr = fr;
})

function FakeResponsive(){
    this.items = [];
    this.timer = 0;
    this.time = 5000;
    this.min = 100;
}

FakeResponsive.prototype = {
    constructor: FakeResponsive,
    add: function (item){
        this.items.push({
            el: item,
            $el: $(item),
            min: this.min,
            max: $(item).width(),
            toogle: true
        })
    },
    init:function(){
        var that = this;
        this.timer = setInterval(function(){
            that.animate();
        },this.time);
    },
    start: function (){
        if(this.items.length){
            this.animate();
            this.init();
        }
    },
    stop: function (){
        clearInterval(this.timer);
        for(var i in this.items){
            var item = this.items[i];
            item.$el.stop().animate({
                width: item.max + "px"
            }, this.time);
        }
    },
    animate: function(){
        var ranWidth = Math.random();
        for(var i in this.items){
            var item = this.items[i];
            var width = item.toogle ? item.min : item.max;
            item.toogle = !item.toogle;
            item.$el.stop().animate({
                width: width + "px" //this.map(ranWidth, 0,1, item.min, item.max) + "px"
            }, this.time);
        }
        
    },
    map: function (value, low1, high1, low2, high2) {
        return low2 + (high2 - low2) * (value - low1) / (high1 - low1);
    }    
    
}
        