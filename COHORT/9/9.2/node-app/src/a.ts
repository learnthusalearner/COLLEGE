// 1

// function greet(firstName: string) {
//     console.log("Hello " + firstName);
// }

// greet("harkirat");


// 2


// function sum(a: number, b: number): number {
//     return a + b;
// }

// console.log(sum(2, 3));


// 3

// function isLegal(age: number) {
//     if (age > 18) {
//         return true;
//     } else {
//         return false
//     }
// }

// console.log(isLegal(2));


// 4

// function delayedCall(fn: () => void) {
//     setTimeout(fn, 1000);
// }

// delayedCall(function() {
//     console.log("hi there");
// })

// 5

interface User {
	firstName: string;
	lastName: string;
	email: string;
	age: number;
}

function logValidity(isValid: boolean) {
    if (isValid) {
      console.log("valid");
    } else {
      console.log("invalid");
    }
  }
  
  function isLegal(user: User) {
    if (user.age > 18) {
      logValidity(true);
      return true;
    } else {
      logValidity(false);
      return false;
    }
  }
  
