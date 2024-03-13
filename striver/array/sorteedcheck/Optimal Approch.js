function sortedcheck(arr){
    for(i=1;i<arr.length;i++){
            if(arr[i]<arr[i+1]){
                return true;
            }
        }  
        return false;
    }
const arr = [1, 2, 3, 4, 5];
console.log(sortedcheck(arr) ? "true":"false");