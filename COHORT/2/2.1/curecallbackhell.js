function kunalfn(duration){
    const p= new Promise(function(resolve){
        setTimeout(function(){
            resolve();
        }, duration);
    });
    return p;
}
//cure for callback hell
//thus promices are used
const ans=kunalfn(1000);
ans.then(function(){
    console.log("timeout is done");
});