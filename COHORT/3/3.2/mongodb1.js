const mongoose=require("mongoose");

mongoose.connect("mongodb+srv://kunalsrivastava0405:dgTIyDvloks4LFmI@cluster0.yqaacpj.mongodb.net/new")
 
const user=mongoose.model('users',{
    name:String,
    email:String,
    password:String
});

const User = new user({
    name:'kunal',
    email:'k@gmail.com',
    password:'123'
});

User.save();
//basic syntax how we save the data in db 