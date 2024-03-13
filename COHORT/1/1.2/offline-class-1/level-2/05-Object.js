// Object Methods Explanation
function objectMethods(obj) {
  console.log("Original Object:", obj);

  let keys = Object.keys(obj);
  console.log("After Object.keys():", keys);

  let values = Object.values(obj);
  console.log("After Object.values():", values);

  let entries = Object.entries(obj);
  console.log("After Object.entries():", entries);

  let haskey1 = obj.hasOwnProperty("key1");//property is not there in const thats why false
  console.log("After hasOwnProperty():", haskey1);

  let hasProp = obj.hasOwnProperty("property");
  console.log("After hasOwnProperty():", hasProp);

  let newObj = Object.assign({}, obj, { newProperty: "newValue" });
  console.log("After Object.assign():", newObj);


}

// Example Usage for Object Methods
const sampleObject = {//think of this as a class with static value in class
  key1: "value1",
  key2: "value2",
  key3: "value3",
};

objectMethods(sampleObject);
