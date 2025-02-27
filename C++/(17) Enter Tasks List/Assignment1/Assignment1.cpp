#include <iostream>
#include <vector>
using namespace std;


void tasksNumber(int tasks, vector<string>& numbersResult);
void tasksShow(vector<string>& showResult);

int main() {
    
    vector<string> resultArray;
    cout << "Please Enter Tasks" << endl;
    int numberOfTasks;
    cin >> numberOfTasks;
    tasksNumber(numberOfTasks, resultArray);
    tasksShow(resultArray);

    return 0;
}

void tasksNumber(int tasks, vector<string>& numbersResult) {
    for (int i = 0; i < tasks; i++) {
        string task;
        cout << "Enter Task" << endl;
        cin >> task;
        numbersResult.push_back(task);
    }
}

void tasksShow(vector<string>& showResult) {
    for (int i = 0; i < showResult.size(); i++) {
        cout << "Task " << i << " Is " << showResult[i] << endl;
    }
}