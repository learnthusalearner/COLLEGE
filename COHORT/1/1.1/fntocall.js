function sum(num1, num2,fntocall) {
    let result = num1 + num2;
    displayResult(result);
}

function displayResult(data) {
    console.log("Result of the sum is : " + data);
}

function displayResultPassive(data) {
    console.log("Sum's result is : " + data);
}

const ans=sum(1,2,displayResult);