interface user{
    name:string;
    age:number;
}

function sumofage(user1:user,user2:user){
    return user1.age + user2.age;
};

const result =sumofage({
    name:"kunal",
    age:20
},{
    name:"mohan",
    age:12
});

console.log(result);
