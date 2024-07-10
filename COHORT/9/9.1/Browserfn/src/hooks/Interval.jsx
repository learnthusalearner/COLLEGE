import { useEffect, useState } from 'react';

export default function Timer() {
  const [count, setCount] = useState(0);

  useEffect(() => {
    const id = setInterval(() => setCount(count => count + 1), 1000);

    //return () => clearInterval(id); might needed when to stop but we not need to here so why extra code
  }, []); 

  return count;
}