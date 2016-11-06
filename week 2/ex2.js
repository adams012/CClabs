$(document).ready(function(){
  console.log("test");
  $("div").click(function() {
   $("div").fadeIn(); 
});
  $("div").mouseenter(function(){
    $(this).fadeOut();
}); 
  $("div").mouseleave(function(){
    $(this).fadeIn();
});
