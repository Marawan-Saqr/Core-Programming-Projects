// Hello Message
alert("Hello Enter Five Numbers To Get Sum Of Them");
alert("Note You Must Enter Numbers Only To Get Valid Results");




// Function Of Numbers
let numbersArray = [];
function numbersOfUser(numbers) {

  for (let i = 1; i <= 5; i++) {
    let userInput;
    do {
      userInput = prompt(`Please Enter Number ${i}`);
    } while (isNaN(userInput) || userInput.trim() === "");
  
    numbers.push(userInput);
  }

  return numbers;

}

// Operations
let numbersFunction = numbersOfUser(numbersArray);
let mapped = numbersFunction.map((element)=> {
  return Number(element);
})

let result = mapped.reduce((acc, current)=> {
  return acc + current;
}, 0);

console.log(`The Final Result Is => ${result}`);