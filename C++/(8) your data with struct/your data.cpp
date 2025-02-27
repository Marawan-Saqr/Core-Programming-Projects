#include <iostream>
using namespace std;
struct Marawan{
    int id;
    string name;
    int age;
    string job;
    string hobby;
};

int main()
{
    char ans;
    Marawan Maro;
    a:
    cout << "Enter your id" << endl;
    cin >> Maro.id;
    cout << "Enter your name" << endl;
    cin >> Maro.name;
    cout << "Enter your age" << endl;
    cin >> Maro.age;
    cout << "Enter your job" << endl;
    cin >> Maro.job;
    cout << "Enter your hobby" << endl;
    cin >> Maro.hobby;
    cout << "Here is your data" << endl;
    cout << "Your id is: " << Maro.id << endl;
    cout << "Your name is: " << Maro.name << endl;
    cout << "Your age is: " << Maro.age << endl;
    cout << "Your job is: " << Maro.job << endl;
    cout << "Your hobby is: " << Maro.hobby << endl;
    b:
    cout << "try again (Y) or (N) ?" << endl;
    cin >> ans;
    if(ans == 'Y' || ans == 'y')
    {
        goto a;
    }

    else if(ans == 'N' || ans == 'n')
    {
        cout << "OK Thank you" << endl;
    }

    else
    {
        cout << "Error please try again" << endl;
        goto b;
    }

    cout << "Close!" << endl;
    return 0;
}
