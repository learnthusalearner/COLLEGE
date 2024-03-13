function explainParseInt(value) {
  console.log("Original Value:", value);
  let result = parseInt(value);
  console.log("After parseInt:", result);//converst any value into "int"  
}

// Example Usage for parseInt
explainParseInt("42");//42
explainParseInt("42px");//"42paax"->42
explainParseInt("3.14");//3

function explainParseFloat(value) {
  console.log("Original Value:", value);
  let result = parseFloat(value);
  console.log("After parseFloat:", result);
}

// Example Usage for parseFloat
explainParseFloat("3.14");//3.14
explainParseFloat("42");//42
explainParseFloat("42px");//42
