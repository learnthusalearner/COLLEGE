const fs= require("fs");//initialize fs file system

fs.readFile("async.txt","utf-8",function(error,data){//async.txt file name to read then utf-8 type of file function(error,data) this is inbuild and defined by the person who build
    console.log(data);
})

console.log("hi there");//pehla jo program me ha then jo laya gaya h reason="asynchronos fn"
