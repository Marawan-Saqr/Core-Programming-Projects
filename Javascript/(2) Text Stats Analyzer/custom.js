// Start The Programme
let userPrompt = prompt("Enter A Word To Analyze It");


function analyzeWord(word) {

  let wordNumbers = word.split(" ");
  let characterNumbers = word.split("");
  let wordStatus = checkWordsRepeat(word);


  const resultObj = {
    wordNumbers: wordNumbers.length,
    characterNumbers: characterNumbers.length,
    wordStatus: wordStatus
  };

  return resultObj;

}


function checkWordsRepeat(word) {

  let splited = word.split(" ");
  let uniqueWords = [];
  let repeatWords = [];

  for (let i = 0; i < splited.length; i++) {
    if (splited.indexOf(splited[i]) === splited.lastIndexOf(splited[i])) {
      uniqueWords.push(splited[i]);
    } else {
      repeatWords.push(splited[i]);
    }
  }

  const obj = {
    uniqueWords: uniqueWords,
    repeatWords: repeatWords
  }

  return obj;

}



console.log(analyzeWord(userPrompt));