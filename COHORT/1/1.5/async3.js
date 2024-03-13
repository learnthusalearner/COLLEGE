const fs= require("fs");//initialize fs file system

fs.readFile("async.txt","utf-8",function(error,data){
    console.log(data);
})

console.log("hi there");

let a=0;
for(let i=0;i<100000;i++){
    a++;
}
console.log("hi there 2");

//pehla jo easily run ho raha h wo phir jo last me bachta h wo 
