#include <iostream>
#include <cctype>
using namespace std;

string swapCase(string myName) {
    int myNameLength = size(myName);
    string result = "";

    for (int i = 0; i < myNameLength; i++) {
        if (isupper(myName[i])) {
            result += char(tolower(myName[i]));
        }
        else {
            result += char(toupper(myName[i]));
        }
    }
    return result;
}


int main() {

    cout << swapCase("MarAwaN") << endl;
    cout << swapCase("Ahmed maHmoud SaQR") << endl;

    return 0;
}