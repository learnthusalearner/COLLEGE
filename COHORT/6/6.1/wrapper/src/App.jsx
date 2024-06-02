
function App() {

  return (
    <div style={{display: "flex"}}>
      <Cardwrapper>
        hi there
      </Cardwrapper>
      <Cardwrapper>
          hello from the 2nd Cardwrapper
      </Cardwrapper>
    </div>
  )
}

function Cardwrapper({children}) {
  return <div style={{
    border: "1px solid black",
    padding: 10,
    margin: 10
  }}>
    {children}
  </div>
}

export default App
