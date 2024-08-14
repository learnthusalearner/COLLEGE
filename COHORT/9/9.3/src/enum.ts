//type Keyinput="up"|"down"|"left"|"right";
// function dosomething(keyPressed:Keyinput){
//     if(keyPressed=="up"){
//         console.log("UP key pressed")
//     }
// }
//The concept behind an enumeration is to create a human-readable way to represent a set of constant values, 
// which might otherwise be represented as numbers or strings.
enum Direction {
    Up,//default 0 in js
    Down,//default 1 in js
    left,//default 2 in js
    Right//default 3 in js
}
function dosomething(keyPressed:Direction){
    if(keyPressed==Direction.Up){
    }
}

dosomething(Direction.Up);
dosomething(Direction.Down);
console.log(Direction.Up)
console.log(Direction.Down)



//this isnt happeneng because i did not have done setup correctly