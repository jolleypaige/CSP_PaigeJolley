let images = ["https://www.un.org/sites/un2.un.org/files/2021/08/feeling-the-heat.jpg", "https://www.un.org/sites/un2.un.org/files/2021/08/earth-asking-for-help.jpg"]
let counter = 0

function change(){
    if(counter < images.length){
        document.getElementById("img"). 
    src = images[counter]
    counter += 1
}else{
    counter = 0
    document.getElementById("img"). 
    src = images[counter]
}
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