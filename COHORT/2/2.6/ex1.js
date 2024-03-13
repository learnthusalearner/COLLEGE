//given array elements 1,2,3,4,5 to 2,4,6,8,10
const arr=[1,2,3,4,5];

const newarray=[];

for(let i=0;i<arr.length;i++){
    newarray.push(arr[i]*2);
}

console.log(newarray);