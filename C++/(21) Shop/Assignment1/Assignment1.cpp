#include <iostream>
using namespace std;

void products();
void choosing();

int main() {

    products();
    choosing();

    return 0;
}

void products() {
    cout << "Welcome To Shop" << endl;
    cout << "1-Pepsi (10) EGP" << endl;
    cout << "2-Pizza (120) EGP" << endl;
    cout << "3-Chepsi (5) EGP" << endl;
    cout << "4-Nescafe (3) EGP" << endl;
}

void choosing() {
    int sum = 0;
    char answer;
    do {
        int yourChoose;
        cout << "What Do You Want?" << endl;
        cin >> yourChoose;
        switch (yourChoose) {
        case 1:
            sum += 10;
            break;
        case 2:
            sum += 120;
            break;
        case 3:
            sum += 5;
            break;
        case 4:
            sum += 3;
            break;
        default:
            cout << "Error" << endl;
        }
        cout << "Your Checkout Is " << sum << " EGP" << endl;
        cout << "Want To Buy Again? (y/n)" << endl;
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');

    cout << "Your Checkout Is " << sum << " EGP" << endl;
    cout << "Thank You Come Again :)" << endl;
}