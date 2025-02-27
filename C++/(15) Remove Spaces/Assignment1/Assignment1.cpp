#include <iostream>
#include <cctype>
using namespace std;

string removeSpaces(string myName) {
    int myNameLength = size(myName);
    string result = "";

    for (int i = 0; i < myNameLength; i++) {
        if (isspace(myName[i])) {
            continue;
        }
        else {
            result += myName[i];
        }
    }

    return result;
}


int main() {

    cout << removeSpaces("M  A   R        O") << endl;

    return 0;
}