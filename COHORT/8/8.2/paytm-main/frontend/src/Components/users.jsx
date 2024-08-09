import { useEffect, useState } from "react"
import { Button } from "./button";
import axios from "axios";
import { useNavigate } from "react-router-dom";

export const Users = () => {
    // Replace with backend call
    const [users, setUsers] = useState([]);
    const [filter, setfilter] = useState([]);

    useEffect(() =>{
        axios.get("http://localhost:3000/api/v1/user/bulk?filter="+ filter)
        .then(response =>{
            setUsers(response.data.user)
        })
    },[filter])

    return <>
        <div className="font-bold mt-6 text-lg p-4">
            Users
        </div>
        <div className="my-2 px-4">
            <input onChange={(e) =>{
                setfilter(e.target.value)
            }}type="text" placeholder="Search users..." className="w-full px-2 py-1 border rounded border-slate-200"></input>
        </div>
        <div className="p-4">
        {/* {users.map(user => <User user={user} />)} */}
        {users.map((user, index) => (
          <User key={user._id} user={user} /> // Key added here
        ))}
        </div>
    </>
}

function User({user}) {
    const Navigate =useNavigate();//takes the person to next page

    return <div className="flex justify-between">
        <div className="flex">
            <div className="rounded-full h-12 w-12 bg-slate-200 flex justify-center mt-1 mr-2">
                <div className="flex flex-col justify-center h-full text-xl capitalize ">
                    {user.firstName[0]}
                </div>
            </div>
            <div className="flex flex-col justify-center h-ful">
                <div>
                    {user.firstName} {user.lastName}
                </div>
            </div>
        </div>

        <div className="flex flex-col justify-center h-ful">
            <Button onClick={()=>{
                Navigate("/send?id="+user._id+"&name="+user.firstName)
            }}label={"Send Money"} />
        </div>
    </div>
}