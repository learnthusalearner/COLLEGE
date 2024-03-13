function findsum(n){
    let ans= 0;
    for(let i=0;i<n;i++){
        ans=ans+i;
    }
    return ans;
}

function findsumtill100(){
    return console.log(findsum(100));
}

setTimeout(findsumtill100,1000);//set timeout is a global variable
console.log("hello");