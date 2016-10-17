confirm ("Are you sure you want to see this site?");


var button1 = document.getElementById("rect1");
var button2 = document.getElementById("rect2");
var button3 = document.getElementById("rect3");
var button4 = document.getElementById("rect4");


function button1Status1(){
	button2.innerHTML = "Yeah!!"; 
	button2.style.backgroundColor = "orange";
	button2.style.color = "white";
};

function button2Status2(){
	button1.innerHTML = "ORANGE!"; 
	button1.style.backgroundColor = "red";
};

button1.onclick = party;

function party(){	
if(button2.innerHTML == "Yas!"){
	button2Status1();

	}else{
		button2Status2();
}
	};



