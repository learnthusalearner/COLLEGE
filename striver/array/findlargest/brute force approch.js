function sort(arr) {
    arr.sort(function(a, b) {
      return a - b;
    });
}
function largest(arr){
    sort(arr);
    let largest=arr[arr.length-1];
    return largest
}

const arr1 = [2, 5, 1, 3, 0];
const arr2 = [8, 10, 5, 7, 9];

console.log(largest(arr1));
console.log(largest(arr2));