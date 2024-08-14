function identity<T>(arg: T): T {//he is just making it the person calling it have t define it <T>
    return arg;//<t> rember anything
}

let output1 = identity<string>("myString");
let output2 = identity<number>(100);
//example of generic