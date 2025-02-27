#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int day;
    cout << "Please Enter a Day from 1 to 7" << endl;
    cin >> day;

    switch(day)
    {

    case 1:  //Saturday
        cout << "Study c++" << endl;
        cout << "Meet a Friend" << endl;
        break;

    case 2:  //Sunday
        cout << "Attend The Meeting" << endl;
        cout << "Play Football" << endl;
        break;

    case 3: //Monday
        cout << "Go To Work" << endl;
        cout << "Play Games" << endl;
        break;

    case 4: //Tuesday
        cout << "Study English" << endl;
        cout << "Watch Movie" << endl;
        break;

    case 5: //Wednesday
        cout << "Work on project" << endl;
        cout << "Listen To Music" << endl;
        break;

    case 6: //Thursday
        cout << "Plan The Month" << endl;
        cout << "Sleep" << endl;
        break;

    case 7: //Friday
        cout << "Review The Course" << endl;
        cout << "Rest All The Day" << endl;
        break;

    default:
        cout << "Internal Data Error" << endl;
        break;
    }

    cout << "Lets Start The Day";
    return 0;
}
