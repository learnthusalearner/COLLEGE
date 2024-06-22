function main(){
    fetch("https://sum-server.100xdevs.com/todos",
    //     {
    //     method:"POST"
    //     body : {
    //         username: "kunal@gmail.com",
    //         password:"123456"
    //     },
    //     Headers: {
    //         "autharization":"xyz"
    //     }
    //   }
    )
    .then(async (res)=>{
        const json=await res.json();
        console.log(json.todos);
        console.log(json.todos.length);

    })
}

main();