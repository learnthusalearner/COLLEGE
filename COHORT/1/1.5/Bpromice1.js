function Promise1() {
  let p = new Promise(function(resolve) {
    resolve("hi there");
    setTimeout(resolve,10000);
  });
  return p;
}

const value = Promise1();
value.then(function(data) {
  console.log(data);
})