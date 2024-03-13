//given array elements 1,2,3,4,5 to 2,4,6,8,10 using strings in filter
const arr=["hi","kunal"];

const ans=arr.filter(function(n){
    if(n.startsWith("h")){
        console.log("here h present");
    }
    else{
        console.log("here h is not present");
    }
})

console.log(ans);