// type definearr = number[]

// function maxValue(arr: definearr) {
function maxValue(arr: number[]) {
    let max = 0;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i]
        }
    }
    return max;
}

console.log(maxValue([1, 2, 3]));

// type User ={
// 	firstName: string;
// 	lastName: string;
// 	age: number;
// }

// function filterusers(arr: User[]){
//    return arr.filter(x => x.age>=18);
// }


//to comile the code in js npx tsc -b is used