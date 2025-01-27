import { Button } from "@/components/ui/button";
import prisma from "@/lib/prisma";
import Image from "next/image";
import Link from "next/link";

export default async function Home() {
  const Snippets=await prisma.snippet.findMany();

  if(!Snippets){
    console.log("No Snippets found");
  }
  return (
    <div>
      <h1 className="font-bold text-4xl ">Home</h1>
      <div className="flex item-center justify-between">
        <h1>Snippets</h1>
        <Link href={"/snippet/new"}><Button>New</Button></Link>
      </div>
      {
        Snippets.map((snippet)=>{
          return (
            <div key={snippet.id} className="flex items-center justify-between my-3 p-3 border border-gray-200 rounded">
              <div>
                <h2 className="font-bold">{snippet.title}</h2>
                <p>{snippet.code}</p>
              </div>
              <div>
                <Link href={`/snippet/${snippet.id}`}>
                <Button>View</Button>
                </Link>
              </div>
            </div>
          );
      })
    }
    </div>
  );
}
