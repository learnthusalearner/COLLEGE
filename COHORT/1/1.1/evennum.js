const num=[1,2,3,4,5,6,7,8,9,10];
const lenth=num.length;
for(let i=0;i<=lenth;i++){
    if(num[i]%2==0){
        console.log("numbers that should be printed(even num) are :"+" "+num[i]);
    }
    else
    {
        continue;
    }
}
