const { JWT_Secretkey } = require("./config");
const JWT =require("jsonwebtoken");

const authMiddleware = (req,res,next) =>{
    const authHeader = req.body.authorization;

    if(!authHeader || !authHeader.startsWith('Bearer')){
        return res.status(411).json({
            msg:"Error/Invalid user"
        })
    }
    const Token =authHeader.split(' ')[1];

    try{
        const Decode=JWT.verify(Token,JWT_Secretkey);
        req.UserId=Decode.UserId;
    }
    catch(err){
        return res.status(403).json({
            msg:"are you the real user ......?"
        });
    }
};

module.exports = {
    authMiddleware
}