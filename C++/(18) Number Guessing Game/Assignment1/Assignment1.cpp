#include <iostream>
using namespace std;

void gameFunction(int gn, int pg, int gt);

int main() {
    
    int guessingNumber = 8;
    int playerGuess = 0;
    int guessTry = 3;

    gameFunction(guessingNumber, playerGuess, guessTry);

    return 0;
}

void gameFunction(int gn, int pg, int gt) {
    char again;
    a:
    while (pg != gn) {
        cout << "Please Enter The Number between 1 To 10" << endl;
        cin >> pg;
        if (pg == gn) {
            cout << "Excellent Nice Work The Number Is " << pg << endl;
        }
        else {
            gt--;
            cout << "Wrong you have " << "(" << gt << " Tries of 3)" << endl;
            if (gt == 0) {
                cout << "Sorry Your Tries Is Finished Game Over" << endl;
                cout << "Try Again? Y / N" << endl;
                cin >> again;
                if (again == 'y') {
                    gt = 3;
                    goto a;
                }
                else if (again == 'n') {
                    cout << "Game Over" << endl;
                    break;
                }
                else {
                    cout << "Error Game Over" << endl;
                    break;
                }
            }
        }
    }
}