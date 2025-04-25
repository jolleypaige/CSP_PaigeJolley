function show(){
    document.getElementById("lost").style.display = "block"
}
function view(){
    if(document.getElementById("more").style.display === "block"){
        document.getElementById("more").style.display = "none"
        document.getElementById("show").innerHTML = "Show More"
    }else{
        document.getElementById("more").style.display = "block"
        document.getElementById("show").innerHTML = "Show Less"
    }
 
}