import { Button } from "@/components/ui/button";
import { Input } from "@/components/ui/input";
import { Label } from "@/components/ui/label";
import { Textarea } from "@/components/ui/textarea";
import prisma from "@/lib/prisma";
import { redirect } from "next/navigation";
import React from "react";

const CreateSnippets = () => {
    async function CreateSnippet(formData:FormData) {
        "use server"
        const title=formData.get("title") as string;
        const code=formData.get("code") as string;

        const Snippet=await prisma.snippet.create({
            data:{
                title: title,
                code: code
            }
        });
        console.log("created Snippet succesfully :",Snippet);
        redirect("/");
      }
    return (
        <form action={CreateSnippet}>
            <div>
                <Label>Title</Label>
                <Input type="text" name="title" id="title"></Input>
            </div>
            <div>
                <Label>Code</Label>
                <Textarea name="code" id="code"></Textarea>
            </div>
            <Button type="submit" className="my-3">New</Button>
        </form>
    );
}

export default CreateSnippets;