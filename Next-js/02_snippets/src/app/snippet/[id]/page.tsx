import React from "react";
import prisma from "@/lib/prisma";
import { Button } from "@/components/ui/button";
import Link from "next/link";
import { redirect } from "next/navigation";

const SnippetNew = async ({ params }: { params: Promise<{ id: string }> }) => {
    const id = parseInt((await params).id);

    const Snippet = await prisma.snippet.findUnique({
        where: {
            id: id
        }
    });

    const DeleteSnippet = async () => {
        "use server"
        await prisma.snippet.delete({
            where: {
                id: id
            }
        });
        console.log("deleted Snippet succesfully");
        redirect("/");
    }

    return (
        <div>
            <div className="flex justify-between">
                <h1 className="text-4xl font-bold mb-4">{Snippet?.title}</h1>
                <div className="space-x-4">
                    <Link href={`/snippet/${Snippet?.id}/edit`}>
                        <Button className="bg-blue-500 text-white px-4 py-2 rounded">Edit</Button>
                    </Link>
                        <Button variant="destructive" onClick={DeleteSnippet} className="bg-red-500 text-white px-4 py-2 rounded">Delete</Button>
                </div>
            </div>
            <pre>
                <code className="p-2 text-gray-500 rounded">
                    {Snippet?.code}
                </code>
            </pre>
        </div>
    );
};

export default SnippetNew;