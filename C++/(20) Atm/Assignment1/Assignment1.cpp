#include <iostream>
using namespace std;

void operations();

int main() {

    int yourBalance = 4000;
    int yourChoice = 0;
    int addBalance = 0;
    int removeBalance = 0;
    cout << "*****Welcome To The Atm*****" << endl;
    while (yourChoice != 4) {
        operations();
        cin >> yourChoice;
        switch (yourChoice) {
        case 1:
            cout << "Your Current Balance Is " << yourBalance << endl;
            break;
        case 2:
            cout << "Add What?" << endl;
            cin >> addBalance;
            yourBalance += addBalance;
            cout << "Your Current Balance Is " << yourBalance << endl;
            break;
        case 3:
            cout << "Remove What?" << endl;
            cin >> removeBalance;
            yourBalance-= removeBalance;
            cout << "Your Current Balance Is " << yourBalance << endl;
            break;
        }
    }

    cout << "Thank You Goodbye" << endl;
    
    return 0;
}

void operations() {
    cout << "1-Show Your Balance" << endl;
    cout << "2-Add On Your Balance" << endl;
    cout << "3-Remove From Your Balance" << endl;
    cout << "4-Exit" << endl;
}
