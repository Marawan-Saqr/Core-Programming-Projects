#include <iostream>
#include <limits>
using namespace std;

// Prototypes
float addNumbers(float numOne, float numTwo);
float subNumbers(float numOne, float numTwo);
float mulNumbers(float numOne, float numTwo);
float dividerNumbers(float numOne, float numTwo);
int modNumbers(int numOne, int numTwo);

int main() {

    // Local Variables
    char op;
    float number_one = 0.0f;  
    float number_two = 0.0f; 
    float result = 0.0f;

    // Programme Progress
    cout << "===========================" << endl;
    cout << "Welcome To Casio Calculator" << endl;
    cout << "===========================" << endl;
    cout << "Please Enter Two Numbers To Make Operation" << endl;
    cout << "Enter Number One" << endl;
    cin >> number_one;
    cout << "Enter Number Two" << endl;
    cin >> number_two;
    cout << "Now Please Select An Operation (+) (-) (*) (/) (%) To Complete The Operation" << endl;
    cin >> op;
    cout << "Good You Choose " << op << " Operation" << endl;


    if (op == '+') {
        result = addNumbers(number_one, number_two);
        cout << "The Result Is " << result << endl;
    }

    else if (op == '-') {
        result = subNumbers(number_one, number_two);
        cout << "The Result Is " << result << endl;
    }

    else if (op == '*') {
        result = mulNumbers(number_one, number_two);
        cout << "The Result Is " << result << endl;
    }

    else if (op == '/') {
        result = dividerNumbers(number_one, number_two);
        cout << "The Result Is " << result << endl;
    }

    else if (op == '%') {
        result = modNumbers(number_one, number_two);
        cout << "The Result Is " << result << endl;
    }
    else {
        cout << "No Operator Match This You Entered " << op << endl;
    }

    cout << "Thank You For Using My Calaculator Programme :)" << endl;

    return 0;
}

// Plus Function
float addNumbers(float numOne, float numTwo) {
    return numOne + numTwo;
}

// Sub Function
float subNumbers(float numOne, float numTwo) {
    return numOne - numTwo;
}

// Multiply Function
float mulNumbers(float numOne, float numTwo) {
    return numOne * numTwo;
}

// didvider Function
float dividerNumbers(float numOne, float numTwo) {
    if (numOne != 0.0f && numTwo == 0.0f) {
        cout << "Error" << endl;
        return -1.0f;
    }

    else if (numOne == 0.0f && numTwo == 0.0f) {
        cout << "Error" << endl;
        return -1.0f;
    }

    else if (numOne == 0.0f && numTwo != 0.0f) {
        return numOne / numTwo;
    }
    
    else {
        return numOne / numTwo;
    }
}

// Modulus Function 
int modNumbers(int numOne, int numTwo) {
    return numOne % numTwo; 
}