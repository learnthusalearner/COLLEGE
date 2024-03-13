let a=1;
console.log(a);//1

const fs= require("fs");

fs.readFile("async2.txt","utf-8",function(error,data){
    console.log(data);
})

ans=0;
for(let i=0;i<=1000000;i++){
    ans=ans+i;
}
console.log(ans);//2
