//making it more optimal by removing the update thing from all componenets to one --- previous one down...
import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {

  return (
    <div>
      <Headerswithbutton/>
      <Headers title="kunal2"></Headers>
      <Headers title="kunal3"></Headers>
      <Headers title="kunal4"></Headers>
      <Headers title="kunal5"></Headers>
    </div>
  )
}
function Headerswithbutton(){
  const [title,setTitle]=useState("kunal1")

  function updateTitle({title}){
    setTitle("my name is "+ Math.random())
  }

return <div>
  <button onClick={updateTitle}>UPDATE TITLE</button>
  <Headers title={title}></Headers>
</div>
}

function Headers({title}){
  return <div>
    {title}
  </div>
}

export default App

// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
// import './App.css'

// function App() {
//   const [title,setTitle]=useState("kunal1")

//   function updatezyz({title}){
//     setTitle("my name is "+ Math.random())
//   }

//   return (
//     <div>
//       <button onClick={updatezyz}>UPDATE</button>
//       <Headers title={title}></Headers>
//       <Headers title="kunal2"></Headers>
//       <Headers title="kunal3"></Headers>
//       <Headers title="kunal4"></Headers>
//       <Headers title="kunal5"></Headers>
//     </div>
//   )
// }

// function Headers({title}){
//   return <div>
//     {title}
//   </div>
// }

// export default App
