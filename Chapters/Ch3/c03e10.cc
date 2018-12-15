#include <iostream>
using namespace std;

void c03e10()
{
    cout << "write an operation like \"+ 100 3.14\": ";
    char op;
    double x1, x2;
    cin >> op >> x1 >> x2;
    double y;
    switch (op)
    {
    case '+':
        y = x1 + x2;
        break;
    case '-':
        y = x1 - x2;
        break;
    case '*':
        y = x1 * x2;
        break;
    case '/':
        y = x1 / x2;
        break;

    default:
        break;
    }
    cout<<"result is: "<<y<<endl;
}