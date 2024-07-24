import { useState,useEffect } from "react";

export default function mousePointer(){
    const [Position, setPosition] = useState({x: 0,y: 0});

    const handleMouse =(e) =>{
        setPosition({x:e.clientX,y:e.clientY})
    }

    useEffect(() => {
        window.addEventListener('mousemove', handleMouse);
        // return () => {
        //   window.removeEventListener('mousemove', handleMouse);
        // };
       //to prevet memory leaks 
      }, []);
      return Position;
}