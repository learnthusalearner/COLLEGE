function bubblesort(arr,n){
    for(let i=0;i<=arr.length-1;i++){
        for(let j=0;j<=arr.length-i-1;j++){
            if(arr[j]>arr[j+1]){
                let temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
let arr=[2,8,19,38,0,22,9];
let n=arr.length;
bubblesort(arr,n);
let Slargest=arr[arr.length-2];

console.log("sorted array : ",arr);
console.log("second largest : ",Slargest);