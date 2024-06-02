import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [Todos, setTodos] = useState([{
    id:1,
    title:"gym",
    description:"go to gym"
  },{
    id:2,
    title:"mess",
    description:"go to mess"
  },{
    id:3,
    title:"class",
    description:"go to class"
  }])
  function addtodo(){
    setTodos([...Todos,{
      id:4,
      title:Math.random(),
      description:Math.random()

    }])
  }

  return (
      <div>
        <button onClick={addtodo}></button>
        {Todos.map(function(todo){
          return <Todo key={todo.id} title={todo.title} description={todo.description}></Todo>//key is mandatory which uniquely identies the todod
        })}
      </div>
  )
}
function Todo({title,description}){
  return <div>
    <h1>
      {title}
    </h1>
    <h5>
      {description}
    </h5>
  </div>
}

export default App
