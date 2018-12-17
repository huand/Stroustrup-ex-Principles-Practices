#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <istream>

using namespace std;

vector<string> init_numbers();
int getnumber(vector<string> &);
char getoperator();
int computeoperation(int &, int &, char &);

void c04e07()
{
    vector<string> num = init_numbers();
    int x = getnumber(num);
    char op = getoperator();
    int y = getnumber(num);
    int z = computeoperation(x, y, op);
    cout << "=" << z << endl;
}





char getoperator()
{
    cout << "Enter operator: ";
    char op;
    cin >> op;
    return op;
}
int computeoperation(int &x, int &y, char &op)
{
    int z = 0;
    switch (op)
    {
    case '+':
        z = x + y;
        break;
    case '-':
        z = x - y;
        break;
    case '*':
        z = x * y;
        break;
    case '/':
        z = x / y;
        break;

    default:
        cout << op << " not a valid operator\n";
        exit(-1);
        break;
    }
    return z;
}
int getnumber(vector<string> &v)
{
    cout << "Enter first operand (digit or letters): ";
    int x;
    if (cin >> x)
        return x;
    cin.clear();
    string s;
    cin >> s;
    auto it = find(v.begin(), v.end(), s);
    int index = distance(v.begin(), it);
    return index;
}

vector<string> init_numbers()
{
    vector<string> numbers;
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
    return numbers;
}