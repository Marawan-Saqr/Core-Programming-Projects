#include <iostream>
#include <cmath>
using namespace std;
//plus function
void sum(int x, int y){
    cout << "your result is " << x + y << endl;
}

//minus function
void sum2(int x, int y){
     cout << "your result is " << x - y << endl;
}

//by function
void by(int x, int y){
     cout << "your result is " << x * y << endl;
}

//dividing function
void dividing(int x, int y){
     cout << "your result is " << x / y << endl;
}

//percentile function
void percentile(int x, int y){
     cout << "your result is " << x % y << endl;
}

//sqrt function
void sqrt(int x, int y){
     cout << "your result is " << sqrt(x) << endl;
}

int main()
{
    int x, y, result;
    char op, again;
    a:
    cout << "Please select the operation (+ - * / % ^)" << endl;
    cin >> op;
    switch(op)
    {
    case '+':
        cout << "Enter Number One :)" << endl;
        cin >> x;
        cout << "Enter Number Two :)" << endl;
        cin >> y;
        sum(x, y);
        break;

    case '-':
        cout << "Enter Number One" << endl;
        cin >> x;
        cout << "Enter Number Two" << endl;
        cin >> y;
        sum2(x, y);
        break;

    case '*':
        cout << "Enter Number One" << endl;
        cin >> x;
        cout << "Enter Number Two" << endl;
        cin >> y;
        by(x, y);
        break;

    case '/':
        cout << "Enter Number One" << endl;
        cin >> x;
        cout << "Enter Number Two" << endl;
        cin >> y;
        dividing(x, y);
        break;

    case '%':
        cout << "Enter Number One" << endl;
        cin >> x;
        cout << "Enter Number Two" << endl;
        cin >> y;
        percentile(x, y);
        break;

    case '^':
        cout << "Enter Number One" << endl;
        cin >> x;
        sqrt(x, y);
        break;

    default:
        cout << "Please select the right operation" << endl;
        goto a;
    }

    cout << "thanks for using our calculator" << endl;
    b:
    cout << "TRY AGAIN? y or n" << endl;
    cin >> again;
    switch(again)
    {
    case 'y':
    case 'Y':
        goto a;
        break;

    case 'n':
    case 'N':
        cout << "Thank You :)" << endl;
        break;

    default:
        cout << "Error" << endl;
        goto b;
    }

    cout << "closing :(" << endl;
    return 0;
}
