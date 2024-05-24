//something is off
const express =require("express");
const app=express();
const zod=require("zod");
app.listen(1000);

function validateInput(obj) {
    const schema = zod.object({
        email: zod.string().email(),
        password: zod.string().min(8)
    })

    const response = schema.safeParse(obj);
    console.log(response);//response success is coming
  //return response
}
app.post("/login", function (req, res) {
    const response = validateInput(req.body)
    if (!response.success) {
        res.json({
            msg: "Your inputs are invalid"
        })
        return;
    }
})
/*
const express =require("express");
const app=express();
const zod=require("zod");
app.listen(1000);

function validateInput(obj) {
    const schema = zod.object({
        email: zod.string().email(),
        password: zod.string().min(8)
    })

    const response = schema.safeParse(obj);
    return response;
}
app.post("/login", function (req, res) {
    const response = validateInput(req.body)
    if (!response.success) {
        res.json({
            msg: "Your inputs are invalid"
        })
        return;
    }
    res.json({
        msg:"ig ur input is valid"
    })
})
*/