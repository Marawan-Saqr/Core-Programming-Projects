#include <iostream>
#include <windows.h>
using namespace std;

void userInput(int& hrs, int& mins, int& secs);
void hourFunctionality(int& hrs, int& mins, int& secs);

int main() {

    int mainHours;
    int mainMinutes;
    int mainSeconds;
    userInput(mainHours, mainMinutes, mainSeconds);
    hourFunctionality(mainHours, mainMinutes, mainSeconds);

    return 0;
}


void userInput(int &hrs, int &mins, int &secs) {
    cout << "Enter Hours" << endl;
    cin >> hrs;
    cout << "Enter mins" << endl;
    cin >> mins;
    cout << "Enter secs" << endl;
    cin >> secs;
}

void hourFunctionality(int& hrs, int& mins, int& secs) {
    while (true) {
        system("cls");
        if (secs > 59) {
            mins++;
            secs = 0;
        }

        if (mins > 59) {
            hrs++;
            mins = 0;
        }

        if (hrs > 23) {
            hrs = 0;
        }
        cout << "===========================================" << endl;
        cout << "==========" << "Hours" << hrs << ":" << "Minutes" << mins << ":" << "Seconds" << secs << "==========" << endl;
        cout << "===========================================" << endl;
        secs++;
        Sleep(900);
    }
}