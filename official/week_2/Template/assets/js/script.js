var replies = ["yes", "no", "I'm a duck, how should I know?", "Dudee I'm a duck. You need to reevaluate your life", "Hell yeah!" "Hell no!" "That'll be one loaf of bread please"]
var sounds = ["yes", "no", "how", "feed me"];
var eyes = ["eyes", "eyes2","eyes3","eyes4", "eyes5", "eyes6", "eyes7"]
var randomNum = 0;
var randomEyes = 0;
var audioElement;

function randomNumGenerator(arrayName){
	return Math.floor(Math.random() * arrayName.length);
}

function answerQuestion(){
	randomNum = randomNumGenerator(replies);

	$('#speech').text(replies[random]);
}

function init(){
console.log("this is working");	
}

	audioElement = document.createElement ('audio')
	audioElement = document.setAttribute('autoplay,' 'autoplay')

$('submit').click(function(){
	answerQuestion();
	});
}

$(document).ready(function(){
	init();
});

