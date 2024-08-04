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
    // const [balance,setBalance]=useState(0);
    // useEffect(() => {
    //     const getBalance = async () => {
    //         try {
    //             const response = await axios.get("http://localhost:2000/api/v1/account/balance",{
    //           headers:{
    //               Authorization:`Bearer ${localStorage.getItem("token")}`
    //             }
    //         });
    //         console.log(getBalance)
    //         setBalance(response.data.balance);
    //       } catch (error) {
    //         console.error(error);
    //       }
    //     };
    //     getBalance();
    //   }, [balance]);
    const [amount,setAmount] = useState(0);
    
    useEffect(()=>{
       
        async function fetchData(){
             const response = await axios.get("http://localhost:3000/api/v1/account/balance",{
                headers:{
                    Authorization:`Bearer ${localStorage.getItem("token")}`
                }
            });
            console.log(response)
            const {balance} = response.data;
            setAmount(balance)
        }
        fetchData()
    },[amount])
    
}

export default Balance