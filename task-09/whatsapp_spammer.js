var textBox = document.querySelectorAll("[contenteditable='true']")[1];  //Selecttor of 2nd textbox
  
var message = "Hi"; 
var counter = 20;
var i=0;
var interval = 1000; //time in miliseconds
var timer = setInterval(
    function(){
  
//for (i = 0; i < counter; i++)     //we can use for loop instead but that will have no delay between messages
    var event = document.createEvent("Events"); 
    textBox.innerHTML = message; 
    event.initEvent("input", true, true, window, 1); 
    textBox.dispatchEvent(event); 
    document.querySelector('#main > footer > div._3SvgF._1mHgA.copyable-area > div:nth-child(3) > button > span').click();
    
//comment out the following if using using for loop
    i++;
    if(counter==i)
    {
        clearInterval(timer);
    }
} , interval)

//}    
