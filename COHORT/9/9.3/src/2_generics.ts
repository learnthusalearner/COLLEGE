function getFirstElement<T>(arr: T[]) {
    return arr[0];
}

const el = getFirstElement<string>(["harkiratSingh", "ramanSingh"]);
const el2 = getFirstElement<string>([1,2]);//is giving err because generic is string
const el3 = getFirstElement<(string|number)>(["harkiratSingh", "ramanSingh",1,2]);//this is correct
console.log(el.toLowerCase())