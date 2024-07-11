import './App.css'

interface TodoProps {
  title: string,
  description: string,
  done: boolean
}

function Todo(props: TodoProps) {
  return (
    <div>
      <h1>
        {props.title}
      </h1>
      <h2>
        {props.description}
      </h2>
      <h3>
        {props.done}
      </h3>
    </div>
  )
}

function App() {
  return (
    <>
      <Todo title="Gym" description="Go to gym" done={false} />
    </>
  )
}

export default App