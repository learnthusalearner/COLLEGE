// Array handbook

// Array:   push(), pop(), shift(), unshift(), splice(), slice(),
// concat(), forEach(), map(), filter(), reduce(), find(), sort()

// Run each function to see the output, play and learn by doing.

// push()
function pushExample(arr, element) {
  console.log("Original Array:", arr);

  arr.push(element);
  console.log("After push:", arr);//end
}
pushExample([1, 2, 3], 4);

// pop()
function popExample(arr,element) {
  console.log("Original Array:", arr);

  arr.pop(element);
  console.log("After pop:", arr);//end
}
popExample([1, 2, 3]);

// shift()
function shiftExample(arr,element) {
  console.log("Original Array:", arr);//beginning

  arr.shift(element);
  console.log("After shift:", arr);
}
shiftExample([1, 2, 3]);

// unshift()
function unshiftExample(arr, element) {
  console.log("Original Array:", arr);//beginning

  arr.unshift(element);
  console.log("After unshift:", arr);
}
unshiftExample([1, 2, 3], 0);

// concat()
function concatExample(arr1, arr2) {
  console.log("Original Arrays:", arr1, arr2);

  let arr3 = arr1.concat(arr2);
  console.log("After concat:", arr3);
}
concatExample([1, 2, 3], [4, 5, 6]);//merge

// forEach()
function forEachExample(arr) {
  console.log("Original Array:", arr);

  arr.forEach(function(item, index) {
    console.log(item, index);
  });
}
forEachExample([1, 2, 3]);

// map()
function mapExample(arr) {//we can multiply or divide at once and will be applied throughout the array
  console.log("Original Array:", arr);

  let newArr = arr.map(function(item) {
    return item * 2;
  });
  console.log("After map:", newArr);
}
mapExample([1, 2, 3]);

// filter()
function filterExample(arr) {//sort according to the size
  console.log("Original Array:", arr);

  let newArr = arr.filter(function(item) {
    return item > 3;
  });
  console.log("After filter:", newArr);
}
filterExample([1, 2, 3, 4, 5]);
// find()
function findExample(arr) {
  console.log("Original Array:", arr);

  let found = arr.find(function(item) {
    return item > 3;
  });
  console.log("After find:", found);
}
findExample([1, 2, 3, 4, 5]);

// sort()
function sortExample(arr) {
  console.log("Original Array:", arr);

  arr.sort(function(a, b) {
    return a - b;
  });
  console.log("After sort:", arr);
}
sortExample([5, 8, 3, 4, 1]);
