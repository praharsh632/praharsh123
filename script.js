const scroll = new LocomotiveScroll({
    el: document.querySelector('#main'),
    smooth: true
});

function page4Animation() {
  const container = document.querySelector(".element-container")
  const image = document.querySelector("#fixed-image")
  container.addEventListener("mouseenter" ,function() {
     image.style.display ="block"
  })
  container.addEventListener("mouseleave" ,function() {
      image.style.display ="none"
   })


const elements = document.querySelectorAll(".elements")
elements.forEach(function(e) {
   e.addEventListener("mouseenter",function() {
     const img = e.getAttribute("data-image")
     image.style.backgroundImage =`url(${img})`    
   })
   image.addEventListener("mouseenter",function(){
    image.style.display = "block";   
})
   image.addEventListener("mouseleave",function(){
    image.style.display = "block";   
})    
})

}

function swiperAnimation() {
var swiper = new Swiper(".mySwiper", {
    slidesPerView: "auto",
    centeredSlides: false,
    spaceBetween: 30,
    pagination: {
      el: ".swiper-pagination",
      clickable: true,
    },
  });
}

swiperAnimation();
page4Animation();

function menu() {
  var menu = document.querySelector("nav .menu")
  var full = document.querySelector(".full-scr")
  var navimg = document.querySelector("nav img")
  var flag = 0
  menu.addEventListener("click", function () {
    if (flag == 0) {
        full.style.top = 0
        navimg.style.opacity = 0
        flag = 1
    } else {
        full.style.top = "-100%"
        navimg.style.opacity = 1
        flag = 0
    }
  }) 
}

menu();

function loader() {
  var loader = document.querySelector(".loader")
setTimeout(function () {
    loader.style.top = "-100%"
}, 3000)
  
}

loader();






