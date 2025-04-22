let images = ["https://m.media-amazon.com/images/I/81xoENr5JwL.jpg", "https://images.stockcake.com/public/5/5/5/55535d01-37cf-4d2d-b11b-8f78f7e62b66_large/sunset-ocean-view-stockcake.jpg", "https://www.visitutah.com/azure/cmsroot/visitutah/media/site-assets/winter-photography/ski-resorts/sundance/sundance-mountain-resort-2_winter-ski_clark-adam_2021.jpg", "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQYnDh41u1DVnxHNiPTu8yWi7xPi7yL8awVc9XHrTjjFw&s&ec=72940542" ]
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
function hello(){
    document.getElementById("title").innerHTML = "Hello World!"
}
function hover(){
    document.getElementById("img").src = "https://www.discovermoab.com/wp-content/uploads/2017/10/Autumn-Sunset-at-Warner-Lake.jpg"
}
function leave(){
    document.getElementById("img").src = "https://images.squarespace-cdn.com/content/v1/63c60d44c98af85334537583/644359f9-c213-4d77-bdb0-b78b7f8424f3/Mount_Timpanogos_at_sunset.jpg"
}
function hidden(){
    document.getElementById("meme").style.display = "block"
}