import { useState } from "react"
import { Heading } from "../Components/heading"
import { Inputbox } from "../Components/inputbox"
import { SubHeading } from "../Components/subheading"
import { Button } from "../Components/button"
import { Bottomwarning } from "../Components/bottomwarning"
import axios from "axios"
import { useNavigate } from "react-router-dom"


const Signup = () => {
    const navigate =useNavigate();
    const [firstName, setFirstName] = useState("");
    const [lastName, setLastName] = useState("");
    const [username, setUsername] = useState("");
    const [password, setPassword] = useState("");

    // below 3 lines are used to make the signup page in middle
    return <div className="bg-slate-300 h-screen flex justify-center">
        <div className="flex flex-col justify-center">
            <div className="rounded-lg bg-white w-80 text-center p-2 ">
                <Heading Props={"Sign up"} />
                <SubHeading Props={"Enter your information to create an account"} />
                <Inputbox onChange={(e) => { setFirstName(e.target.value) }} placeholder="Enter your First name" label="first Name" />
                <Inputbox onChange={(e) => { setLastName(e.target.value) }} placeholder="Enter your Last Name" label="last name" />
                <Inputbox onChange={(e) => { setUsername(e.target.value) }} placeholder="Enter your Email" label="Email" />
                <Inputbox onChange={(e) => { setPassword(e.target.value) }} placeholder="Enter your Passwords" label="Password" />
                <div className="p-4">
                    <Button label={"sign up"} onClick={async() =>{
                        const response=await axios.post("http://localhost:3000/api/v1/user/signup",{
                            username:username,
                            firstName:firstName,
                            lastName:lastName,
                            password:password
                        })
                        localStorage.removeItem("token",response.data.token)
                        localStorage.setItem("token",response.data.token)
                        navigate("/signin")
                    }
                    }></Button>
                </div>
                <Bottomwarning label={"Already have an account?"} buttontext={"Sign in"} to={"/signin"} />
            </div>
        </div>
    </div>

}

export default Signup