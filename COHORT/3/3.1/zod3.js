const z = require("zod");

function validateinput(arr) {
  const schema = z.array(z.number());
  const response = schema.safeParse(arr);
  console.log(response);
}
validateinput(["1", 4, 55]);
validateinput([1, 4, 55]);
