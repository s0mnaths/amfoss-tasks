var textBox = document.querySelectorAll("[contenteditable='true']")[1];  //Selector of 2nd textbox
  
var message = "Hi"; 
var counter = 20;
var i=0;
var interval = 1000; //time in miliseconds

var timer = setInterval(
    function(){
        var event = document.createEvent("Events"); 
        textBox.innerHTML = message; 
        event.initEvent("input", true, true, window, 1);  //make send button visible
        textBox.dispatchEvent(event); 
        document.querySelector('#main > footer > div._3SvgF._1mHgA.copyable-area > div:nth-child(3) > button > span').click();
    
        i++;
        if(counter==i)
        {
            clearInterval(timer);
        }
    } , interval)