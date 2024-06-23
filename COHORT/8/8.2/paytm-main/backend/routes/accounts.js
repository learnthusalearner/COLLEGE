const { default: mongoose } = require("mongoose");
const { Account } = require("../db");
const { authMiddleware } = require("../middleware");
const Router = require("./user");

Router.get("/balance",authMiddleware,async (req,res) =>{
    const account = await Account.findOne({
        userId:req.userId
    });
    res.json({
        balance:Account.balance
    })
});

Router.post("/transfer",authMiddleware,async (req,res) =>{//auth verifies that it is which specific user
    const session = await  mongoose.startSession();//start session doesnt stops partially stops at commitSession

    session.startTransaction();

    const { Amount,to } = req.body ;//req send to backend

    const account = await Account.findOne({userId:req.userId}).session(session);//find account with user id which is send backend and start the session

    if(!Account || Account.balance<Amount){
        await session.abortTransaction();
        return res.statusCode(400).json({
            msg:"Insufficient balance"
        })
    }

    const toAccount = await Account.findOne({userId:to}).session(session);//to which account needs to be send money

    if(!toAccount){
        await session.abortTransaction();
        return res.status(400).json({
            msg:"Account does'nt exist "
        })
    }

    await Account.updateOne({userId:req.userId},{$inc:{balance:-Amount}}).session(session);//adding money
    await Account.updateOne({userId:to},{$inc:{balance:Amount}}).session(session);//substracting money

    await session.commitTransaction();//now completed the whole trasaction 
    res.json({
        message: "Transfer successful"
    });
})



