console.log("hi there");

setTimeout(function(){
    console.log("inside async function 1");
},20000);

setTimeout(function(){
    console.log("inside async function 2");
},10000);

let a=0;
for(let i=0;i<1000000;i++){
    a++;
}
console.log(a);