// Welcome Message
alert("Welcome To My Calculator App");



// Numbers Of Users
let numberOne = prompt("Enter Number One");
let numberTwo = prompt("Enter Number Two");


// Select Operation
function operation(numberOne, numberTwo) {

  let operationOperator = prompt("Please Enter Operation (+ - * / %)");
  let numberedOne = Number(numberOne);
  let numberedTwo = Number(numberTwo);

  switch(operationOperator) {
    case "+":
      return numberedOne + numberedTwo;
    case "-":
      return numberedOne - numberedTwo;
    case "*":
      return numberedOne * numberedTwo;
    case "/":
      return numberedOne / numberedTwo;
    case "%":
      return numberedOne % numberedTwo;
    default:
      return `Error No Operation Like This ${operationOperator}`;
  }

}

// Run Programme First Time
let firstTime = operation(numberOne, numberTwo);
alert(`The Result Is ${firstTime}`);



// User Operations
while(true) {
  let userChoice = prompt("Do You Want To Continue (Yes Or No) ?");
  if (userChoice.toLowerCase() === "yes") {
    let numberOne = prompt("Enter Number One");
    let numberTwo = prompt("Enter Number Two");
    let numberedOne = Number(numberOne);
    let numberedTwo = Number(numberTwo);
    let second = operation(numberedOne, numberedTwo);
    alert(`The Result Is ${second}`);
  } else {
    alert("Thank You Bye");
    break;
  }
}