function kiratsAsyncFunction(callback) {
    // do some async logic here
    callback("hi there!")
}

async function main() {
  kiratsAsyncFunction(function(value) {
    console.log(value);
  });
}

main();