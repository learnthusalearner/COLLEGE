const express=require('express');
const port=3000;
const app=express();

app.get('/route-handler',function(req,res){
    res.json({
        name:"kunal",
        age:19
    });
})
app.listen(port);