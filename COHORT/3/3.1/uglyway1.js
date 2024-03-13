const express=require("express");
const app=express();
app.listen(9999);

app.get("/health-checkup",function(req,res){
    const kidneyId=req.query.kidneyId;
    const username=req.headers.username;
    const password=req.headers.password;


    if(username!="kunal" || password!="pass"){
        res.status(403).json({
            msg:"username not found",
        });
        return;
    }
    if(kidneyId!=1 && kidneyId!=2){
        res.status(411).json({
            msg:"wrong input",
        });
        return;
    }
    res.send("your heart is healthy");
});

app.put("/replace-kidney",function(req,res){
    const kidneyId=req.query.kidneyId;
    const username=req.headers.username;
    const password=req.headers.password;


    if(username!="kunal" || password!="pass"){
        res.status(403).json({
            msg:"username not found",
        });
        return;
    }
    if(kidneyId!=1 && kidneyId!=2){
        res.status(411).json({
            msg:"wrong input",
        });
        return;
    }
    res.send("your heart is healthy");
});