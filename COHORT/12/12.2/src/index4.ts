// type User5 = Record<string,number>

// const users:User5 ={
//     "kunal@12":21,
//     "kunal@21":22
// }

//compex one

type User5 = Record<string,{age:number,name:string}>

const users:User5 ={
    "kunal@12":{age:11,name:"ks"},
    "kunal@21":{age:13,name:"ms"}
}