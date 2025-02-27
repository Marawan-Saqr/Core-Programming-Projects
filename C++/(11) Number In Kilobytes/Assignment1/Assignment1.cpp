#include <iostream>
using namespace std;

// Create Programe That Take Number Of Kilobytes From User 

int main() {
    
    int number;
    cout << "Please Enter Number in kilobytes" << endl;
    cin >> number;

    int kilobytes = number;
    int bytes = kilobytes * 1024;
    int bits = bytes * 8;

    cout << kilobytes << endl;
    cout << bytes << endl;
    cout << bits << endl;

    return 0;
}