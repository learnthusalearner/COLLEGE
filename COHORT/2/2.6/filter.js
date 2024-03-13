//given array elements 1,2,3,4,5 to 2,4,6,8,10 using filter
const arr=[1,2,3,4,5];

const ans=arr.filter(function(i){
    return i%2==0;
})

console.log(ans);