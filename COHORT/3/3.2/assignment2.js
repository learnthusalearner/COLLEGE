//important remember to install zod 
const jwt =require("jsonwebtoken");
const jwtpassword="secret";
const zod=require("zod");

const emailschema=zod.string().email();
const passwordschema=zod.string().min(6);

function signjwt(username,password){
    const usernameresponse=emailschema.safeParse(username);
    const passwordresponse=passwordschema.safeParse(password);
    if(!usernameresponse.success || !passwordresponse.success){
        return null;
    }
     try {
    const signature = jwt.sign({ username:username }, jwtpassword);
    return signature;
  } catch (error) {
    console.error("Error generating JWT:", error);
    return null;
  }
}

const token = signjwt("kunal@gmail.com", "secret");
console.log(token);

const verification=jwt.verify("eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6Imt1bmFsQGdtYWlsLmNvbSIsImlhdCI6MTcxNDk3NDk3NX0.mpSAAI2aEeKJ5jJnYuNX2bOL1oZHwgcFVVuAPJGIZbA","secret")
console.log(verification);
console.log("verified...");