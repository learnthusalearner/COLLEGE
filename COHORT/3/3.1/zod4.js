const z = require("zod");

function validateinput(obj) {
  const schema =z.object({
    email:z.string().email(),
    password:z.string().min(8)
  })

  const response=schema.safeParse(obj);
  console.log(response);
}

validateinput({
    email:"ha@gmail.com",
    password:"728191001"

});