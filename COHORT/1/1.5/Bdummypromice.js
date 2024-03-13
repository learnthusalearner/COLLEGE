function kunalasyncdummyfunction() {
    let p = new Promise(function(resolve) {
      resolve("hi there");
    });
    return p;
  }
  
  const value = kunalasyncdummyfunction();
  value.then(function(data) {
    console.log(data);
  })