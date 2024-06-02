import { useEffect, useState } from "react";

function App() {
  const [counter, setCounter] = useState(0);
  const [inputValue, setInputValue] = useState(1);
  const [Count,setCount] =useState(0)

  useEffect(()=>{
  let finalCount = 0;
  for (let i = 1; i <= inputValue; i++) {
    finalCount=finalCount+i;
  }
  setCount(finalCount);
},[inputValue])

  return <div>
    <input onChange={function(e) {
      setInputValue(e.target.value);
    }} placeholder={"NUM HERE"}></input>
    <br />
    Sum from 1 to {inputValue} is {Count}
    <br />
    <button onClick={() => {
      setCounter(counter + 1);
    }}>Counter ({counter})</button>
  </div>
}

export default App;
