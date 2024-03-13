function sort(arr) {
    arr.sort(function(a, b) {
      return a - b;
    });
}
function Slargest(arr){
    sort(arr);
    let Slargest=arr[arr.length-2];
    return Slargest;
}

function Ssmallest(arr){
    sort(arr);
    let Ssmallest=arr[1];
    return Ssmallest;
}
const arr=[1,3,21,42,1,55,98];

console.log(Slargest(arr));
console.log(Ssmallest(arr));

