const axios =require("axios");

async function main(){
    const res = await axios.get("https://sum-server.100xdevs.com/todos",
        // {
        //     "username":"abc",
        //     "password":"1234"
        // },{
        //     Headers :{
        //         "autharization":"xyz"
        //     }
        // }
    )
    console.log(res.data);
    console.log(res.data.todos.length);

}

main();