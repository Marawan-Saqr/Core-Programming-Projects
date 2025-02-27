#include <iostream>
using namespace std;
int main()
{

    int currentYear, yearOfBirth, result;
    cout << "Please Enter The yearOfBirth and currentYear" << endl;
    cin >> yearOfBirth;
    cin >> currentYear;

    if (yearOfBirth >= 1 & currentYear >= 1)
    {
        result = currentYear - yearOfBirth;
    }

    else
    {
        cout << "Error Please try again" << endl;
    }

    cout << "The Result Is " << result;

    return 0;
}
