const users =[{
    firstname:"kunal",
    age:19,
    metadata:{
        address:"kanpur",
        phonenumber:9908
    }
},{  firstname:"soham",
    age:19,
    metadata:{
        address:"kanpur",
        phonenumber:998
} },{
    firstname:"ab",
    age:9,
    metadata:{
        address:"kanpur",
        phonenumber:908
    }
}]

for(let i=0;i<users.length;i++){
    if(users[i]["metadata"]["address"]=="kanpur"){
        console.log(users[i]["metadata"]["address"]);
    }
}