function findSecondSmallestAndLargest(arr) {
    arr.sort(function(a, b) {
      return a - b;
    });

    console.log("Second Smallest: " + arr[1]);
    console.log("Second Largest: " + arr[arr.length - 2]);
  }
  
  const arr = [2, 5, 1, 3, 0];
  findSecondSmallestAndLargest(arr);
  