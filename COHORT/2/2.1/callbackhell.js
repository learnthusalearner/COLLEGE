let a=1;
console.log(a);

setTimeout(function(){//1
    console.log("1st run");//1.2

    setTimeout(function(){//1.3
        console.log("2ndrun");//1.5
    },10000);//1.4
},5000);//1.1

ans=0;
for(let i=0;i<=10;i++){
    ans=ans+i;
}
console.log(ans);
//to fix this callback hell promises and were intoduced to make it easy
