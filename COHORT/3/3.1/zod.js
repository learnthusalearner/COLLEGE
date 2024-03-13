//postman required
const express =require("express");
const app=express();
const zod=require("zod");

const schema=zod.array(zod.number());
app.use(express.json());

app.post("/health-checkup",(req,res)=>{
    const kidneys=req.body.kidneys;
    const response=schema.safeParse(kidneys);
    if(!response.success){
        res.status(411).json({
            msg:"input invalid"
        })
    } else {
    res.send({
        response
    })
}
});

app.listen(2000);
