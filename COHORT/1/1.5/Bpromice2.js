function promice2(callback){
    setTimeout(callback,2000)
}

promice2(function(data){
    console.log("hello");
})