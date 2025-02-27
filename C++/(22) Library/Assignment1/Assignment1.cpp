#include <iostream>
#include <vector>
using namespace std;

vector<string> addMembers();
void showMembers(const vector<string>& membersArray);
void showBooks();

int main() {
    int operation;
    bool repeat = true; 

    cout << "=======================================================" << endl;
    cout << "===========Welcome To Our Library App==================" << endl;
    cout << "=======================================================" << endl;

    while (repeat) {
        cout << "Choose Functionality \n 1-Add Member \n 2-Show Members \n 3-Show Books \n 4-Exit" << endl;
        cin >> operation;

        switch (operation) {
        case 1:
            addMembers();
            break;
        case 2: {
            vector<string> numbers = addMembers();
            showMembers(numbers);
            break;
        }
        case 3:
            showBooks();
            break;
        case 4:
            repeat = false;
            cout << "Thank You :)" << endl;
            break;
        default:
            cout << "Invalid operation. Please try again." << endl;
        }
    }

    return 0;
}

vector<string> addMembers() {
    vector<string> membersArray;
    int membersToAdd = 0;
    cout << "Add Number Of Members" << endl;
    cin >> membersToAdd;
    for (int i = 0; i < membersToAdd; i++) {
        string element;
        cout << "Enter Members " << i + 1 << endl;
        cin >> element;
        membersArray.push_back(element);
    }
    return membersArray;
}

void showMembers(const vector<string>& membersArray) {
    cout << "Members in Library:" << endl;
    for (int i = 0; i < membersArray.size(); ++i) {
        cout << "Member " << i + 1 << ": " << membersArray[i] << endl;
    }
}

void showBooks() {
    vector<string> books = { "Lets Work", "Design Patterns", "Hitman", "Money", "Programming", "Rich Daddy", "Football", "Cr7" };
    for (string book : books) {
        cout << book << endl;
    }
}
