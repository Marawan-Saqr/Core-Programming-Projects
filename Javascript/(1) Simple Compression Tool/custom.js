// Welcome Message
alert("Hello Please Enter The Word You Want To Compress");
let word = prompt("Enter The Word");


// Validate The User Word
const validateWord = (userWord) => {
  let trimmed = userWord.trim();
  if (trimmed === "" || /\d/.test(trimmed) || trimmed.length < 4) {
    return false;
  } else {
    return true;
  }
}


// Compress The Word Function
const compressWord = (validateWord) => {

  let newObj = {};
  for (let i = 0; i < validateWord.length; i++) {
    if (newObj[validateWord[i]]) {
      newObj[validateWord[i]] += 1;
    } else {
      newObj[validateWord[i]] = 1;
    }
  }

  let result = "";
  for (let char in newObj) {
    result += `${char}: ${newObj[char]}, `;
  }

  return result.slice(0, -1);

}



// Operations
let valid = validateWord(word);
if (valid) {
  const compress = compressWord(word.toLowerCase());
  console.log(compress);
} else {
  alert("You Can't Enter Numbers Or Empty Result");
}