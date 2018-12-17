#include <iostream>
using namespace std;

void c04e05
()
{
    cout << "Enter an operation (format 1.23, 2.14, +): ";
    char c;
    double x, y, z;
    cin >> x >> c >> y >> c >> c;
    string s;
    switch (c)
    {
    case '+':
        s = "sum";
        z = x + y;
        break;
    case '-':
        s = "difference";
        z = x - y;
        break;
    case '*':
        s = "multiplication";
        z = x * y;
        break;
    case '/':
        s = "division";
        z = x / y;
        break;

    default:
        break;
    }
    cout << "The "<<s<<" of "<<x<<" and "<<y<<" is "<<z<<endl;
}