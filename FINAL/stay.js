let images = ["https://www.travelmanagers.com.au/wp-content/uploads/2013/02/AdobeStock_113476152_Bonneville-Salt-Flats-Utah-USA_750x375.jpg", "https://i0.wp.com/www.culturalchromatics.com/wp-content/uploads/2016/02/BonnevilleSaltFlats-%C2%A9NanetteWong-7.jpg?resize=660%2C440&ssl=1"]
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