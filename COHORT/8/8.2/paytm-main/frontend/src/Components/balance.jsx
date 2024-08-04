import axios from "axios"
import { useState,useEffect } from "react"

const Balance = () =>{

    
    return (
        <div className="flex space-x-2 p-4">
            <div> 
                <b>Your balance</b>
            </div>
            <div>
                Rs <Balancefrombackend />
            </div>
        </div>
        )
    }
    
const Balancefrombackend =() =>{
    const [amount,setAmount] = useState(0);

    useEffect(()=>{
        async function fetchData(){
             const response = await axios.get("http://localhost:3000/api/v1/account/balance",{
                headers:{
                    Authorization:`Bearer ${localStorage.getItem("token")}`
                }
            });
            const balance = response.data;
            setAmount(balance)
        }
        fetchData()
    },[])
}


export default Balance