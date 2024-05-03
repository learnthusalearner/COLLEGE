//postman required//err
const express =require("express");
const app=express();
const z=require("zod");

const schema=z.object({
    email:z.string(),
    password:z.string(),
    country:z.literal("IN").or(z.literal("US")),
    kidneys:z.array(z.number())
})
app.use(express.json());

app.post("/health-checkup",(req,res)=>{
    const kidneys=req.body.kidneys;
    const response=schema.safeParse(schema);
    if(!response.success){
        res.status(400).json({ msg: "Input validation failed", errors: response.error.issues });
    } else {
    res.send({
        response
    })
    }
});

app.listen(2000);

