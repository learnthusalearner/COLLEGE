import { useEffect } from 'react'
import { useState } from 'react'

export default function checkinternet(){
    const [isOnline, setisOnline] = useState(window.navigator.onLine);
  
    useEffect(() =>{
      window.addEventListener("online", () =>{
        setisOnline(true);
      })
    })
  
    useEffect(() =>{
      window.addEventListener("offline", () =>{
        setisOnline(false);
      })
    })
    
    return isOnline;
  }

