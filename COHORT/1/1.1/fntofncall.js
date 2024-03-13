function calculatearithmetic(a,b,arithematicfunctionfinalcall){
    const ans=arithematicfunctionfinalcall(a,b);
    return ans;
}

function sum(a,b){
    return a+b;
}

const value=calculatearithmetic(1,2,sum);
console.log(value);