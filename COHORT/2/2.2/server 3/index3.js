const express=require('express');
const port=3000;
const app=express();

app.get('/conversation',function(req,res){
    res.send({
       msg:'2+2=4'
    });
})
app.listen(port);