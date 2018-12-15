#include <iostream>
using namespace std;

void c03e08()
{
    cout << "Enter an integer: ";
    int i;
    cin >> i;
    cout << "Number " << i << " is an ";
    if (i % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    cout << " number\n";
}