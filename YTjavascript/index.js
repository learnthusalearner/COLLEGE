document.write("this is an document");
console.log("Hello world");
console.warn("this is warning");
console.error("this is an error");

var num1=70;
var num2=30;

console.log(num1+num2);


var arr=[1,2,"kunal",4,5];
console.log(arr);

var a=30;
var b=70;

console.log("the value of a+b",a+b);
console.log("the value of a-b",a-b);
console.log("the value of a*b",a*b);

var c=b;
console.log("output of c",c);

console.log("the value of a==b",a==b);
console.log("the value of a&&b",a&&b);//jo zyada hoga wo print karta h
console.log("the value of a||b",a||b);//jo kam hota h wo print karta h

function avg(a,b){
    c=(a+b)/2;
    return c;
}

c1=avg(4,6);
c2=avg(15,15);

console.log(c1,c2);


var age=9;
if(age==20){
    console.log("adult");
}
else if(age<15){
    console.log("below puberty");
}
else{
    console.log('none');
}


let arr1=[1,2,34,5,6,7];
    for(let i=0;i<arr1.length;i++){
        console.log(arr1[i]);
        if(arr1[i]==1){
            break;
        }
        else{
            continue;
        }

    }

    let elem=document.getElementById('click');
    console.log(elem);

    elem.onclick=()=>{
        console.log('it was clicked');
    }

    let elemclass=document.getElementsByClassName('container');
    console.log(elemclass);
    elemclass[0].style.background ='yellow';

    elemclass[0].classList.innerHTML;
    
    sel=document.querySelector('.container');

    


   
