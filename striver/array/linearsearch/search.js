function linearSearch(arr, n, Element) {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] == Element) {
            return i;
        }
    }
    return -1;
}

let arr = [1, 4, 7, 11, 16];
let n = arr.length;
let Element = 11;

let result = linearSearch(arr, n, Element);

if (result != -1) {
    console.log(`Element ${Element} found at index ${result}.`);
} else {
    console.log(`Element ${Element} not found in the array.`);
}
