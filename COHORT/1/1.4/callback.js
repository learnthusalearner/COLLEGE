function fn(n){
    return n*n;
}

function fn(n){
    return n*n*n;
}

// function findsumofsquares(a,b){
//     const value1=fn(a);
//     const value2=fn(b);

//     return value1+value2;
// }

// function findsumofsquares(a,b){
//     const value1=cube(a);
//     const value2=cube(b);

//     return value1+value2;
// }

function findsumofsquares(a,b,fn){
    const value1=fn(a);
    const value2=fn(b);

    return value1+value2;
}