confirm ("Are you sure you want to see this site?");


var button1 = document.getElementById("rect1");
var button2 = document.getElementById("rect2");
var button3 = document.getElementById("rect3");
var button4 = document.getElementById("rect4");



function button1Status1(){
	button1.innerHTML = "Yeah!!"; 
	button1.style.backgroundColor = "red";
	button1.style.color = "white";
	canvas.style.backgroundImage = "url('images/vortex.gif')";
};

function button1Status2(){
	button1.innerHTML = "RED!"; 
	button1.style.backgroundColor = "red";
	button1.style.color = "black";
	
	text_div.innerHTML = "";	
	canvas.style.BackgroundColor = "black";
};
button1.onclick = party;

function party(){	
if(button1.innerHTML == "Million!"){
	button1Status1();

	}else{
		button1Status2();
		
	}
};

