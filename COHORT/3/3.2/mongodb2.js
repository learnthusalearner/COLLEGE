const express = require("express");
const mongoose = require("mongoose");
const app = express();

app.use(express.json());

mongoose.connect("mongodb+srv://kunalsrivastava0405:dgTIyDvloks4LFmI@cluster0.yqaacpj.mongodb.net/users")

app.post("/signup",async function(req,res){
    const username=req.body.username;
    const password=req.body.password;
    const name=req.body.name;

    const existnguser=await user.findone({email:username});
    if(existnguser) {
        return res.status(400).send("username already exist");
    }


    const user =new User({
        name: name,
        email: username,
        password: password
    });

    user.save();
        res.json({
            msg:"already exist"
        })

    })