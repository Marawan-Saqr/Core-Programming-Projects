#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int age;
    cout << "Please Enter Your Age" << endl;
    cin >> age;

    if(age >= 1 && age <= 14)
    {
        cout << "You are a child" << endl;     // طفل
    }

    else if( age >= 15  && age <= 22 )
    {
        cout << "You are a teenager" << endl;  //مراهق
    }

    else if( age >= 23 &&  age <= 30 )
    {
        cout << "You are adult" << endl;       // راشد
    }

    else
    {
        cout << "You are old" << endl;         //  كبير بالسن
    }

    cout << "and your age is " << age << endl;
    return 0;
}
