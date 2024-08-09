import { useState } from "react"
import { Heading } from "../Components/heading"
import { Inputbox } from "../Components/inputbox"
import { SubHeading } from "../Components/subheading"
import { Button } from "../Components/button"
import { Bottomwarning } from "../Components/bottomwarning"
import axios from "axios"
import { useNavigate } from "react-router-dom"

const Signin = () => {
    const [username, setUsername] = useState("");
    const [password, setPassword] = useState("");
    const navigate =useNavigate();

    // below 3 lines are used to make the signup page in middle
    return <div className="bg-slate-300 h-screen flex justify-center">
        <div className="flex flex-col justify-center">
            <div className="rounded-lg bg-white w-80 text-center p-2 ">
                <Heading Props={"Sign in"} />
                <SubHeading Props={"Enter your credentials to access your account"} />
                <Inputbox onChange={(e) => { setUsername(e.target.value) }} placeholder="Enter your Email" label="Email" />
                <Inputbox onChange={(e) => { setPassword(e.target.value) }} placeholder="Enter your Passwords" label="Password" /   >
                <div className="p-4">
                    <Button onClick={async(e) =>{
                        const response=await axios.post("http://localhost:3000/api/v1/user/signin",{
                            username:username,
                            password:password
                        })
                        localStorage.setItem("token",response.data.token)
                        navigate("/dashboard")
                    }}label={"sign in"}></Button>
                </div>
                <Bottomwarning label={"Don't have an account?"} buttontext={"Sign up"} to={"/signup"} />
            </div>
        </div>
    </div>

}

export default Signin