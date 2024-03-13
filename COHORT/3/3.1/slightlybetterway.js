const express=require("express");
const app=express();
app.listen(9998);

function usernamevalidation(username,password){
    if(username!="kunal" && password!="pass"){
        return false;
    }
    return true;
}
function kidneyvalidation(kidneyId){
    if(kidneyId!=1 && kidneyId!=2){
        return false;
    }
    return true;
}


app.get("/health-checkup",function(req,res){
    const kidneyId=req.query.kidneyId;

    if(!usernamevalidation(req.headers.username,req.headers.password)){
        res.status(403).json({
            msg:"username not found",
        });
        return;
    }
    if(!kidneyvalidation(kidneyId)){
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