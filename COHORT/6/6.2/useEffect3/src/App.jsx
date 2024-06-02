import { useState, useEffect } from "react";
import './App.css'
import './index.css'

function App() {
  const [selectedId, setSelectedId] = useState(1);
  const [todo, setTodo] = useState({}); // Initialising todo state

  useEffect(() => {
    fetch(`https://sum-server.100xdevs.com/todo?id=${selectedId}`)
      .then(async (res) => {
        const json = await res.json();
        setTodo(json.todo);
      })
  }, [selectedId]); // Dependency: update on selectedId change

  return (
    <div>
      <button onClick={() => setSelectedId(1)}>1</button>
      <button onClick={() => setSelectedId(2)}>2</button>
      <button onClick={() => setSelectedId(3)}>3</button>
      <button onClick={() => setSelectedId(4)}>4</button>
      <Todo id={selectedId} todo={todo}></Todo>
    </div>
  );
}

function Todo({id,todo}) {
  return (
    <div>
      <h1>{todo.title}</h1>
      <h5>{todo.description}</h5>
    </div>
  );
}

export default App;
