import { SignIn } from "@clerk/nextjs";

export default function Page(){
    return (
        <div className="flex justify-center items-center m-12"><SignIn />;</div>
    )
}