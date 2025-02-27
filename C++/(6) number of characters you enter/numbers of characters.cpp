#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please Enter Your Name" << endl;
    getline(cin, name);
    cout << "The Number Of Characters are " << name.length() << endl;
    return 0;
}
