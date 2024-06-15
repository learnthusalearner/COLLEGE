const mongoose=require("mongoose");
const { boolean } = require("zod");

mongoose.connect("mongodb+srv://kunalsrivastava0405:dgTIyDvloks4LFmI@cluster0.yqaacpj.mongodb.net/todos");

const todoschema=mongoose.Schema({
    title:String.email(),
    description:String,
    completed: Boolean
})

const todo=mongoose.model('todos',todoschema);

module.exports ={
    todo
}