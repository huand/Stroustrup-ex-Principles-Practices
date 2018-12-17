#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void c04e06()
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

    cout << "spell a number: ";
    string s;
    cin >> s;
    auto p = find(numbers.begin(), numbers.end(), s);
    int index=distance(numbers.begin(),p);
    cout<<index<<endl;;
}
