"use strict";
class employee {
    constructor(n, a) {
        this.name = n;
        this.age = a;
    }
    greet(phase) {
        console.log('Hello ${this.name}');
    }
}
class Manager {
    constructor(n, a) {
        this.name = n;
        this.age = a;
    }
    greet(phase) {
        console.log('Hello sir ${this.name}');
    }
}
const e = new employee("kunal", 22);
const m = new Manager("harkirat", 29);
console.log(e);
console.log(m);
