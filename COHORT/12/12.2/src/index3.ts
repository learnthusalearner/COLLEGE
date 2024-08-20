type User3 ={
    name:string,
    age:number
}     

const user: Readonly<User3> ={
// const user: User3 ={
    name:"abcd",
    age:19
}

user.name="kunal"//now will give error when we only read the value