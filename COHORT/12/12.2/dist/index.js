"use strict";
function sumofage(user1, user2) {
    return user1.age + user2.age;
}
;
const result = sumofage({
    name: "kunal",
    age: 20
}, {
    name: "mohan",
    age: 12
});
console.log(result);
