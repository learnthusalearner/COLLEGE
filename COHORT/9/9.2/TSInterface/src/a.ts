interface Person{//it will not be shown in final js file is only visible here because it helps in while
    name: string,//writing code i.e fix comiple time error
    age?: number,
    greet(phase:string): void
}

class employee implements Person{
    name:string;
    age:number;

    constructor(n:string,a:number){
        this.name=n;
        this.age=a;
    }

    greet(phase: string) {
        console.log('Hello ${this.name}');        
    }
}

class Manager implements Person{
    name:string;
    age:number;

    constructor(n:string,a:number){
        this.name=n;
        this.age=a;
    }

    greet(phase: string) {
        console.log('Hello sir ${this.name}');        
    }
}

const e= new employee("kunal",22);
const m= new Manager("harkirat",29);

console.log(e);
console.log(m);
