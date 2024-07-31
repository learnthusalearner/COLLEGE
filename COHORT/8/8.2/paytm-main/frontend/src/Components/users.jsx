import { useState } from "react"
import { Button } from "./button";

export const Users = () => {
    // Replace with backend call
    const [users, setUsers] = useState([{
        firstName: "Kunal",
        lastName: "Srivastava",
        _id: 1
    }]);

    return <>
        <div className="font-bold mt-6 text-lg p-4">
            Users
        </div>
        <div className="my-2 px-4">
            <input type="text" placeholder="Search users..." className="w-full px-2 py-1 border rounded border-slate-200"></input>
        </div>
        <div className="p-4">
        {users.map(user => <User user={user} />)}
        </div>
    </>
}

function User({user}) {
    return <div className="flex justify-between">
        <div className="flex">
            <div className="rounded-full h-12 w-12 bg-slate-200 flex justify-center mt-1 mr-2">
                <div className="flex flex-col justify-center h-full text-xl">
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
            <Button label={"Send Money"} />
        </div>
    </div>
}