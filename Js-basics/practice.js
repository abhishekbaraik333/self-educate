// console.log('hello gang am the leader');

// let array = [4,5,7,8,9,20,34,566,78,45];

// console.log("abhi")
// console.log("abhi2")
// setTimeout(function(){
//     console.log("abhi3")
// })
// console.log("abhi4")

// let ans = new Promise((res,rej) => {
//     if(true){
//     return res();
//     }
//     else{
//         return rej();
//     }
// })
// ans
//     .then(function(){
//         console.log("resolved")
//     })
//     .catch(function(){
//         console.log("rejected");
//     })

// let ans = new Promise((res,rej)=>{
//     let n = Math.floor(Math.random()*10)

//     if(n<5){
//         return res();
//     }
//     else{
//         return rej();
//     }
// })

// ans.then(function(){
//     console.log("below 5")
// })
// .catch(function(){
//     console.log("above 5")
// })
// var ans = new Promise(function(res,rej){
//     return res("html seekho")
// })
// var p2 = ans
// .then(function(data){
//     console.log(data);
//     return new Promise(function(res,rej){
//         return res("css seekho")
//     })
// })
// let p3 = p2.then(function(data){
//     console.log(data);
//     return new Promise(function(res,rej){
//         return res("javascript seekho")
//     })
// })
// p3.then(function(data){
//     console.log(data)
// })
// async function abcd(){
//     let raw = await fetch(`https://randomuser.me/api/`)
//     let ans = await raw.json();
//     console.log(ans);
// }
// abcd();
//  let a =  document.querySelector("h1")
//  a.style.backgroundColor = "blue"
//  a.style.color = "red"

//  a.addEventListener("click", function(){
//     console.log("heyy lodu")
//     a.style.color = "yellow"
//     a.innerHTML = "bye lodu"
//  })