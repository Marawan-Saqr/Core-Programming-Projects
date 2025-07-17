// Important Imports
import { tasks } from "./data.js";


// Check If There Is Username
function checkUserName(userParam) {
  if (!userParam || userParam === "") {
    return false;
  } else {
    return true;
  }
}


// Validate Username
function validateUserName(name) {
  const regex = /^[A-Za-z]+$/;
  return regex.test(name);
}


// Get All Options For User
function getAllOptions() {
  let userOption = prompt(
    "1-Show All Tasks\n 2-Add New Task\n 3-Delete Task\n 4-Update Task \n 5-End Task Manager"
  );
  return userOption;
}


// See All Tasks
function getAllTasks(tasks) {
  return tasks;
}


// Add New Task
function addNewTask(tasks, tName, tDone, tHours) {
  const newTask = {
    id: tasks.length,
    taskName: tName,
    taskDone: tDone,
    taskHours: tHours,
  };
  tasks.push(newTask);
  return tasks;
}


// Delete Task By ID
function deleteTaskByID(tasks, taskID) {
  const taskId = tasks.filter((task) => {
    return task.id !== taskID;
  });
  return taskId;
}


// Update Task By ID
function updateTaskByID(tasks, taskID, newName, newDone, newHours) {
  const taskIndex = tasks.findIndex((task) => task.id === taskID);
  if (taskIndex !== -1) {
    tasks[taskIndex].taskName = newName;
    tasks[taskIndex].taskDone = newDone;
    tasks[taskIndex].taskHours = newHours;
    return tasks;
  } else {
    alert("No Task Found With This ID");
  }
}


// Operations
alert("Welcome To Task Manager");
let userName = prompt("Please Enter Your Name :)");
// Check Username
while (!checkUserName(userName) || !validateUserName(userName)) {
  alert("Please Enter Invalid Name");
  userName = prompt("Please Enter Your Name Again :)");
}
alert(`Hello ${userName} Let's Manage Your Tasks`);


// Check User Options
let isRunning = true;
while (isRunning) {
  let allOptions = getAllOptions();
  switch (allOptions) {
    // Show All Tasks
    case "1":
      let getAll = getAllTasks(tasks);
      alert(JSON.stringify(getAll));
      break;

    // Add New Task
    case "2":
      let newName = prompt("Enter Name");
      let newDone = prompt("Enter Status") === "true";
      let newHours = parseFloat(prompt("Enter Hours"));
      let newTask = addNewTask(tasks, newName, newDone, newHours);
      alert(JSON.stringify(newTask));
      break;

    // Delete Task By ID
    case "3":
      let deleteId = parseInt(prompt("Enter Task ID To Delete"));
      if (!isNaN(deleteId)) {
        let newTasksList = deleteTaskByID(tasks, deleteId);
        tasks.length = 0;
        tasks.push(...newTasksList);
        alert("Task Deleted Successfully");
      } else {
        alert("Invalid ID");
      }
      break;

    // Update Task By ID
    case "4":
      let updateId = parseInt(prompt("Enter Task ID To Update"));
      if (!isNaN(updateId)) {
        let updatedName = prompt("Enter New Task Name");
        let updatedDone =
          prompt("Is The Task Done? (true/false)").toLowerCase() === "true";
        let updatedHours = parseFloat(prompt("Enter New Task Hours"));
        let result = updateTaskByID(
          tasks,
          updateId,
          updatedName,
          updatedDone,
          updatedHours
        );
        if (result) {
          console.log("Task Updated Successfully");
        }
      } else {
        alert("Invalid ID");
      }
      break;

    // Programme Close
    case "5":
      isRunning = false;
      alert("Thanks For Using Task Manager");
      break;

    // Default Option
    default:
      alert("Please Choose a Valid Option From 1 to 5");
      break;
  }
}