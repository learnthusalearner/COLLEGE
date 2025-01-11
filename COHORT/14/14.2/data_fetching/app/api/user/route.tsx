import { NextRequest } from "next/server";
import { PrismaClient } from "@prisma/client";
const client=new PrismaClient();

export async function POST(req: NextRequest){
const body = await req.json();
console.log(body);
client.user.create({
    data:{
        username:body.username,
        password:body.password
    }
})

return Response.json({
    message: "You are togged in!"
})
}
export function GET() {
    return Response.json({
        email: "kunal@gmail.com",
        name: "kunal"
    })
}

