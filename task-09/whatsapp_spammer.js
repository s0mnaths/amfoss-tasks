var textBox = document.querySelectorAll("[contenteditable='true']")[1];  
  
var message = "Hi"; 
var counter = 20;
var i=0;
var interval = 1000; //time in miliseconds
var timer = setInterval(
    function(){
  
//for (i = 0; i < counter; i++)  //use for loop instead of setinterval if you want to delay between messages
    var event = document.createEvent("Events"); 
    textBox.innerHTML = message; 
    event.initEvent("input", true, true, window, 1); 
    textBox.dispatchEvent(event); 
    document.querySelector('#main > footer > div._3SvgF._1mHgA.copyable-area > div:nth-child(3) > button > span').click();
    
    //remove these while using for loop
    i++;
    if(counter==i)
    {
        clearInterval(timer);
    }
//}
    } , interval)