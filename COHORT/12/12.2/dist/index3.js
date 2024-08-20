"use strict";
//const user: Readonly<User3> ={
const user = {
    name: "abcd",
    age: 19
};
user.name = "kunal"; //now will give error when we only read the value
