let images = ["https://i0.wp.com/www.culturalchromatics.com/wp-content/uploads/2016/02/BonnevilleSaltFlats-%C2%A9NanetteWong-3.jpg?resize=660%2C440&ssl=1", "https://i0.wp.com/www.culturalchromatics.com/wp-content/uploads/2016/02/BonnevilleSaltFlats-%C2%A9NanetteWong-7.jpg?resize=660%2C440&ssl=1"]
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
        document.getElementById("show").innerHTML = "Want to Learn About the Canals? Click Here to Show More!"
    }else{
        document.getElementById("more").style.display = "block"
        document.getElementById("show").innerHTML = "I'm Done Learning... Show Less"
    }
 
}