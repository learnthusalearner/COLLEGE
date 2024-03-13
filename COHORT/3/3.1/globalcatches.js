//postman required
const express =require("express");
const app=express();
app.listen(1000);

app.use(express.json());

app.post("/health-checkup",(req,res)=>{
    const kidney=req.body.kidneys;
    const kidneylength=kidney.length;
    
    res.send("the kidney length is "+ kidneylength);

});

app.use(function(err,req,res,next){
    res.json({
        msg:"Sorry something is up"
    })
})
