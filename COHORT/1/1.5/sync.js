function findsum(n){
    let ans= 0;
    for(let i=0;i<n;i++){
        ans=ans+i;
    }
    return ans;
}

console.log(findsum(1000));