import FileUpload from "@/components/FileUpload";
import { Button } from "@/components/ui/button";
import { UserButton, useUser } from "@clerk/nextjs";
import { auth, currentUser } from "@clerk/nextjs/server";
import { ArrowRight, LogIn, LogInIcon } from "lucide-react";
import Link from "next/link";

export default function Home() {

  //checks the backend is the auth present there or not
  const userId  = auth();
  //if the auth present there then true else false accordingly
  const isAuth = !!userId;


  return (
    // bg color this is from google bard asked from it
    <div className="w-screen min-h-screen bg-gradient-to-b from-[#f0f2f5] to-[#e5e8eb]">
      {/* making the text in the middle */}
      <div className="absolute top-5 right-5">
        <UserButton afterSwitchSessionUrl="/" />
      </div>
      <div className="absolute top-1/2 left-1/2 -translate-x-1/2 -translate-y-1/2">
        <div className="flex flex-col items-center text-center">
          <div className="flex  items-center">
            <h1 className="mr-3 text-5xl font-semibold">Chat with any PDF</h1>
          </div>
          <div className="flex mt-2">
            {isAuth && <Link href='/chat/1' ><Button>Go to chats</Button></Link>}
          </div>
          <p className="max-w-xl mt-1 text-lg text-slate-600">Ask, analyze, and act. Our AI chat empowers you to extract insights from your PDFs effortlessly.</p>
          <div className="w-full mt-4">
            {isAuth ?(
            <h1><FileUpload /></h1>
            ):(
              <Link href="/sign-in">
                <Button>
                  <b className="flex">Login to get Started! <LogInIcon className="w-4 h-4 ml-2" /></b>
                </Button>
              </Link>
            )}
          </div>
        </div>
      </div>
    </div>
  );
}