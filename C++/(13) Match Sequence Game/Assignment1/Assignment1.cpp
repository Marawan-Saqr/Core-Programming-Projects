#include <iostream>
#include <array>
using namespace std;


int main() {

    // Make Programme Match Sequence Game

    int points = 0;
    int num;
    int sequences[3][5] = { {1, 3, 5, 7, 9}, {2, 4, 8, 16, 32}, {3, 9, 27, 81, 243} };
    
    

    cout << "Welcome To Sequences Game" << endl;
    
    // Sequence One
    cout << "Enter The Number In Sequence One 1 | 3 | 5 | 7 | ??" << endl;
    cin >> num;
    if (num == sequences[0][4]) {
        points++;
    }

    // Sequence Two
    cout << "Enter The Number In Sequence Two 2 | 4 | 8 | 16 | ??" << endl;
    cin >> num;
    if (num == sequences[1][4]) {
        points++;
    }

    // Sequence Three
    cout << "Enter The Number In Sequence Three 3 | 9 | 27 | 81 | ??" << endl;
    cin >> num;
    if (num == sequences[2][4]) {
        points++;
    }

    cout << "Finish Your Points Is " << points << " From 3" << endl;




    return 0;
}