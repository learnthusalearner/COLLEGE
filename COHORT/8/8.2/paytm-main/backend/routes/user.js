const express = require('express');
const zod = require("zod");
const { User } = require('../db');
const { JWT_Secretkey } = require('../config');
const { authMiddleware } = require('../middleware');
const Router = express.Router();

const SignupSchema = zod.object({
    username: zod.string().email(),
    password: zod.string(),
    Firstname: zod.string(),
    Lastname: zod.string()
})

Router.post("/signup",async (req,res) =>{
    const body =req.body;
    const {Success} =SignupSchema.safeParse(body);

    if(!Success){
        return res.status(411).json({
            message: "Enter Correctly"
        })
    }

    const existingUser = User.findOne({
        username:req.body.username
    })

    if (existingUser) {
        return res.status(411).json({
            message: "Email already taken/Invalid inputs"
        })
    }

    const User = await User.create({
        username: req.body.username,
        password: req.body.password,
        firstName: req.body.firstName,
        lastName: req.body.lastName,
    })
    const userId = User._id;

    await Account.create({
        userId,
        balance: 1 + Math.random() * 10000
    })
    
    const token = jwt.sign({
        userId
    },JWT_Secretkey);

    res.json({
        message: "User created successfully",
        token: token
    })
})

const SigninSchema =zod.object({
    username: zod.string().email(),
    password: zod.string()
})
Router.post("/signin",(req,res) =>{
    const body =req.body;
    const { Success } =SigninSchema.safeParse(body);

    if(!Success){
        return res.status(411).json({
            msg:"Enter correctly/Invalid Input"
        })
    }

    const User = User.findOne({
        username: req.body.username,
        password: req.body.password
    })

    if(User){
        const token =JWT.sign({UserId:User._id},JWT_Secretkey);
        res.json({
            token:token
        })
    }
        res.status(411).json({
            msg:"Some error occured please try later"
        })

})

const updateSchema = zod.object({
    password:zod.string().optional(),
    Firstname:zod.string().optional(),
    Lastname:zod.string().optional()
})

Router.put("/",authMiddleware,async (req,res) =>{
    const body = req.body;
    const { Success } = updateSchema.safeParse(body);

    if(!Success){
        res.status(411).json({
            msg:"Error while updating information"
        })
    }

    await User.updateOne(req.body,{
        id:req.UserId
    })

    res.status(200).json({
        msg:"Update successfully"
    })
})

Router.get("/bulk",async (req,res) => {
    const Filter = req.query.Filter || "";

    const User = await User.find({
        $or:[{
            Firstname:{
                "$regex":Filter 
            }
        },{
            Lastname:{
                "$regex":Filter
            }
        }]
    })

    res.json({
        user: users.map(user => ({
            username: user.username,
            firstName: user.firstName,
            lastName: user.lastName,
            _id: user._id
        }))
    })
})

module.exports = Router;
