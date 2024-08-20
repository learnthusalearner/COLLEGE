import { PrismaClient } from "@prisma/client";

const prisma = new PrismaClient();

//CREATING

// async function insertUser(username: string, password: string, firstName: string, lastName: string) {
//   const res = await prisma.user.create({
//     data: {
//         username,
//         password,
//         firstName,
//         lastName
//     }
//   })
//   console.log(res);
// }

// insertUser("Kunal@gmail.com", "Kunal2004", "Kunal", "Srivastava")

//UPDATING

// interface UpdateParams {
//     firstName: string;
//     lastName: string;
//     password:string
// }

// async function updateUser(username: string, {
//     firstName,
//     lastName,
//     password
// }: UpdateParams) {
//   const res=await prisma.user.update({
//     where: {username:username},
//         data: {
//             firstName,
//             lastName,
//             password
//         }
//   })
//   console.log(res);
// }

// updateUser("Kunal@gmail.com",{firstName:"kunal",lastName:"srivastava",password:"123456789"})

//get user

// async function getUser(username: string) {
//     const user = await prisma.user.findFirst({
//       where: {
//           username: username
//       }
//     })
//     console.log(user);
//   }

//   getUser("Kunal@gmail.com");

//Remove

interface Deleteparams{
    firstName: string;
    lastName: string;
}

async function updateUser(username: string, {
    firstName,
    lastName
}: Deleteparams) {
  const res=await prisma.user.delete({
    where: {
        username:username
    }
  })
  console.log(res);
}

updateUser("admin2",{firstName:"kunal",lastName:"srivastava"})