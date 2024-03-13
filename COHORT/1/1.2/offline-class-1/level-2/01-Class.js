
class Animal {//class jiske aandar sab defined h "animal" 
  constructor(name, legCount,speaks) {
    this.name = name
    this.legCount = legCount
    this.speaks = speaks;
  }
  speak() {
    console.log("hi there "+" "+ this.speaks);
  }
  static mytype(){
    console.log("this is animal");
  }
}
console.log(Animal.mytype());
let dog =new Animal("dog",4,"bhow bhow");//the place where class is defined is object "dog" (creating objext)
dog.speak()//call fn in object
console.log(dog);
let cat=new Animal("cat",4,"meow meow");//withut new we would be simply calling class example below
cat.speak();
console.log(cat);
/*let alien=Animal("alien",3,"oho oho");
alien.speak();
console.log(alien);*/





