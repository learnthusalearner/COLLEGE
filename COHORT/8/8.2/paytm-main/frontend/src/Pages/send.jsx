import React, { useState } from "react";
import { Button } from "../Components/button";
import { Inputbox } from "../Components/inputbox";
import { SubHeading } from "../Components/subheading";
import { useSearchParams } from "react-router-dom";
import axios from "axios";

const Send = () => {
    const [searchParams] = useSearchParams();
    const id = searchParams.get("id");
    const name = searchParams.get("name");
    const [amount, setAmount] = useState('');
    const [error, setError] = useState(false);
    const [success, setSuccess] = useState(false);

    const handleAmountChange = (e) => {
        setAmount(e.target.value);
    };

    const handleTransfer = async () => {
        if (!amount || isNaN(amount) || amount <= 0) {
            setError('Please enter a valid amount.');
            return;
        }

        try {
            const response = await axios.post("http://localhost:3000/api/v1/account/transfer", {
                to: id,
                amount: Number(amount) // Ensure amount is a number
            }, {
                headers: {
                    Authorization: `Bearer ${localStorage.getItem("token")}`
                }
            });

            setSuccess('Transfer successful!');
            setError(false);
        } catch (error) {
            setError('Transfer failed.');
            setSuccess(false);
        }
    };

    return (
        <div className="bg-slate-300 h-screen flex justify-center">
            <div className="flex flex-col justify-center">
                <div className="rounded-lg bg-white w-80 text-center p-5">
                    <h2 className="text-2xl font-bold">Send Money</h2>
                    <SubHeading Props={"   "} />
                    <SubHeading Props={"   "} />
                    <SubHeading Props={"   "} />
                    <SubHeading Props={"   "} />
                    <div className="flex items-center space-x-4">
                        <div className="w-12 h-12 rounded-full bg-green-500 flex items-center justify-center">
                            <span className="text-2xl text-white capitalize">{name[0]}</span>
                        </div>
                        <h3 className="text-2xl font-semibold">{name}</h3>
                    </div>
                    <div className="flex flex-col justify-center">
                        <Inputbox 
                            onChange={handleAmountChange} 
                            className="px-2 py-2 font-semibold" 
                            name={"Amount (in Rs)"} 
                            placeholder={"Enter amount"} 
                            value={amount} // Ensure controlled input
                        />
                    </div>
                    {error && <p className="text-red-500">{error}</p> || success && <p className="text-green-500">{success}</p>}
                    <div className="flex flex-col justify-center h-24">
                        <Button onClick={handleTransfer} label={"Initiate Transfer"} />
                    </div>
                </div>
            </div>
        </div>
    );
}

export default Send;
