#include <iostream>
using namespace std;
//bank database
struct client{
    string userName = "Marwan";
    string userPass = "Marawan234";
    int userBalance = 1200;
}clie;

struct client2{
    string userName = "Ahmed";
    string userPass = "Ahmedeg234";
    int userBalance = 1500;
}clie2;

struct client3{
    string userName = "Mona";
    string userPass = "MonNa22";
    int userBalance = 1000;
}clie3;

struct client4{
    string userName = "Hager";
    string userPass = "H333ger";
    int userBalance = 2000;
}clie4;


//Declaration variable for registration function
string name;
string password;
int balance;
int func;

//Login Function
int login(string user, string pass){
    b:
    cout << "Enter your name" << endl;
    cin >> user;
    cout << "Enter your password" << endl;
    cin >> pass;
    if(user == clie.userName && pass == clie.userPass || user == clie2.userName && pass == clie2.userPass || user == clie3.userName && pass == clie3.userPass || user == clie4.userName && pass == clie4.userPass){
        cout << "Welcome at login page" << endl;
        f:
        cout << "Choose your functionality" << endl;
        cout << "1-Add new balance"<< endl;
        cout << "2-show your balance" << endl;
        cin >> func;
        double newBalance = 0;
        if(func == 1)
        {
            cout << "Enter your balance" << endl;
            cin >> newBalance;
            cout << "your new balance is " << newBalance << endl;
        }

        else if(func == 2)
        {
            cout << "Your balance is " << newBalance << endl;
        }

        else
        {
            cout << "Error" << endl;
            goto f;
        }

    } else {
        cout << "Error try again" << endl;
        goto b;
    }
}

//Registration Function
int registration(){
    cout << "Please fill your data" << endl;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your password" << endl;
    cin >> password;
    cout << "Enter your balance" << endl;
    cin >> balance;
    cout << "Done your name is " << name << " your balance is " << balance << endl;
    cout << "Thank you :)" << endl;
    cout << "Welcome at login page" << endl;
    login(name, password);
}

int main()
{
    cout << "Welcome at our bank" << endl;
    a:
    cout << "Choose your functionality" << endl;
    cout << "1-Registration"<< endl;
    cout << "2-Login" << endl;
    cin >> func;
    if(func == 1){
        cout << "Welcome at registration page" << endl;
        registration();
    } else if(func == 2){
        cout << "Welcome at login page" << endl;
        login(name, password);
    } else{
        cout << "wrong functionality" << endl;
        goto a;
    }

    return 0;
}
