#include <iostream>
using namespace std;
int main()
{
    //Variable Declration
    string name;
    int age;
    int level;
    char ans;
    int result = 0;
    //User commands
    cout << "Welcome at squid game please follow the rules:" << endl;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "OK " << name << " lets start" << endl;
    sl:
    cout << "Select level (1, 2, 3) \n 1=> easy \n 2=> normal \n 3=> hard" << endl;
    cin >> level;
    //if statement
    if(level == 1){
        cout << "You selected easy level be ready!" << endl;
        //Read the conditions
        cout << "Please " << name << " read the conditions before start" << endl;
        cout << "this game created by me please da3wa mnk" << endl;
        cout << "7abaeby yasta" << endl;
        cout << "Lets Start!" << endl;
        cout << "Q1: What is the name of the first person who went into space? \n 1-Yuri Gagarin \n 2-Tori Gagarin \n 3-Yuri Gagarine" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Well Done! " << 5 << endl;
            result += 5;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q2: How many planets in our galaxy? \n 1-(3) \n 2-(8) \n 3-(7)" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Well Done " << 5 << endl;
            result += 5;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q3: the person who united the two countries? \n 1-Mena \n 2-Ahmos \n 3-Ramses" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Well Done " << 5 << endl;
            result += 5;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        if(result == 5){
            cout << "noob your score is 5 from 15" << endl;
        } else if(result == 10){
            cout << "Good your score is 10 from 15" << endl;
        } else if(result == 15){
            cout << "Wow! you have good knowledge well done your score is 15 from 15" << endl;
        }
    } else if(level == 2){
        cout << "You selected normal level be ready!" << endl;
        //Read the conditions
        cout << "Please " << name << " read the conditions before start" << endl;
        cout << "this game created by me please da3wa mnk" << endl;
        cout << "7abaeby yasta" << endl;
        cout << "Lets Start!" << endl;
        cout << "Q1: How tall is the longest crocodile in the world?? \n 1-(5.47m) \n 2-(5.48m) \n 3-(5.55m)" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong :(" << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Well Done! " << 5 << endl;
            result += 5;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q2: How many colors of frogs?? \n 1-(9) \n 2-(5) \n 3-(6)" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Well Done :( " << 5 << endl;
            result += 5;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q3: How many types of insects?? \n 1-6 million type \n 2-4 million type \n 3-20 million type" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Well Done " << 5 << endl;
            result += 5;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        if(result == 5){
            cout << "noob your score is 5 from 15" << endl;
        } else if(result == 10){
            cout << "Good your score is 10 from 15" << endl;
        } else if(result == 15){
            cout << "Wow! you have good knowledge well done your score is 15 from 15" << endl;
        }
    } else if(level == 3){
        cout << "You selected hard level be ready!" << endl;
        //Read the conditions
        cout << "Please " << name << " read the conditions before start" << endl;
        cout << "this game created by me please da3wa mnk" << endl;
        cout << "7abaeby yasta" << endl;
        cout << "Lets Start!" << endl;
         cout << "Q1: Who is the founder of the tallest tower in the world? \n 1-Johny Cage \n 2-Adrian Smith \n 3-Ibrahim nsar" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong! " << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Well Done :( " << 5 << endl;
            result += 5;
            break;
        case '3':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q2:  \n 1-Tomas Edison \n 2-Michael Wilis \n 3-Nicolas Josef" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Well Done :( " << 5 << endl;
            result += 5;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        cout << "Q3: ? \n 1-Edwen Drik \n 2-Franklin Smith \n 3-Benjamin Franklin" << endl;
        cin >> ans;
        switch(ans){
        case '1':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '2':
            cout << "Wrong :( " << 0 << endl;
            result += 0;
            break;
        case '3':
            cout << "Well Done! " << 5 << endl;
            result += 5;
            break;
        default:
            cout << "Wrong " << 0 << endl;
            result += 0;
        }
        if(result == 5){
            cout << "noob your score is 5 from 15" << endl;
        } else if(result == 10){
            cout << "Good your score is 10 from 15" << endl;
        } else if(result == 15){
            cout << "Wow! you have good knowledge well done your score is 15 from 15" << endl;
        }
    } else{
        cout << "Error try again" << endl;
        goto sl;
    }

    //The End
    cout << "Game over thank you " << name << " Have a nice day :)" << endl;
    cout << "Game Version 1.0" << endl;
    return 0;
}
