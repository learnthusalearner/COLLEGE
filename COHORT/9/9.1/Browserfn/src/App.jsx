import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import { useEffect } from 'react'
import checkinternet  from './hooks/Online'
import mousePointer from './hooks/Pointer'
import Timer from './hooks/Interval'


function App() {
  const isOnline =checkinternet()
  const pointerlocation =mousePointer();
  const count =Timer()
  return (
    <div>
      <h3>{isOnline ? "YAY you are online":"OOPS you are offline"}</h3>
      <h4>Your mouse position is {pointerlocation.x} {pointerlocation.y}</h4>
      <h5>TIMER: {count}seconds!</h5>
    </div>
  )
}

export default App
