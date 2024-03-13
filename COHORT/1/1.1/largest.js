let arr=[2,3,5,1,0];
let largest=0;

for(let i=0;i<=arr.length;i++){
    if(largest<arr[i]){
        largest=arr[i];
    }
}
console.log(largest);