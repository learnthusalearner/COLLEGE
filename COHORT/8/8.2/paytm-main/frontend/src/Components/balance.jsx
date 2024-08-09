import axios from "axios"
import { useState,useEffect } from "react"

const Balance = () =>{
    const [amount, setAmount] = useState(0);

    useEffect(() => {
        async function fetchData() {
            try {
                const response = await axios.get("http://localhost:3000/api/v1/account/balance", {
                    headers: {
                        Authorization: `Bearer ${localStorage.getItem("token")}`
                    }
                });
                //console.log(response.data.balance);
                const data=response.data.balance;
                const new_data=data.toFixed(2);//2 decimal places
                setAmount(new_data);
            } catch (error) {
                console.error("Error fetching balance:", error);
            }
        }
        fetchData();
    }, []); // Only run on mount

    return (
        <div className="flex space-x-2 p-4">
            <div> 
                <b>Your balance</b>
            </div>
            <div>
                Rs {amount}
            </div>
        </div>
        )
    }
    
export default Balance