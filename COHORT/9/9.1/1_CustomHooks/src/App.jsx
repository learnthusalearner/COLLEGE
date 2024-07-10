import { useEffect, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [Render, setRender] = useState(true)

  useEffect(() =>{
    setTimeout(() =>{
      setRender(Render ==false);
    },2000)
  })

  return (
    <div>
        {Render ? <MyComponent />:<div>2nd div</div>}
    </div>
  )
}

function MyComponent() {
  useEffect(() => {
    console.error("compound mounted");//in the very beginning this is already consoled (1)

    return () => {
      console.log("compound unmounted")//(2)
    }
  }, [])//whenever the dependency changes 1st time (1) then (2) will run 2nd time (2)then(1)
  return <div>
    From Inside Of Component
  </div>
}

export default App
