#include <iostream>
#include <string>
using namespace std;

void c03e09()
{
    cout << "spell a number (one, two, three or four): ";
    string s;
    cin >> s;
    cout << "you entered: ";
    char f;
    f=s.at(1);
    switch (f)
    {
    case 'n':
        cout << "1\n";
        break;
    case 'w':
        cout << "2\n";
        break;
    case 'h':
        cout << "3\n";
        break;
    case 'o':
        cout << "4\n";
        break;
    default:
        cout << "not a known number\n";
        break;
    }
}