document.addEventListener("DOMContentLoaded", function(){

console.log(13);

var degree = 0;
var degreeIncrement = 0.1;
var timerWaitTime = 10;

var parentDiv = document.getElementsByClassName("parent");
var div1 = document.getElementById("div1");
var div2 = document.getElementById("div2");
var div3 = document.getElementById("div3");

//console.log(parentDiv.length);

//for (var i= 0; i < parentDiv.length; i ++){
//	parentDiv[i].style.backgroundColor = "red";
//}

//div1.style.backgroundColor = "red";
div2.style.backgroundColor = "red";


var rotateDiv = function(){

	parentDiv[0].style.transform = "rotate(" + degree + "deg)";
	degree += degreeIncrement;
}

window.setInterval(rotateDiv,10);

//rotateDiv();

});