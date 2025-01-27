"use server"
import prisma from "@/lib/prisma";
import { redirect } from "next/navigation";
export const SaveSnippet = async (id:number,code:string) => {
    await prisma.snippet.update({
        where:{
            id:id
        },
        data:{
            code:code
        }
    }); 
console.log("updated Snippet succesfully");
redirect('/snippet/'+id);
}