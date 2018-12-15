#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void c03e06()
{

    try
    {
        vector<int> v;
        cout << "vector dimension?: ";
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "enter vector element " << i << ": ";
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        for (auto &&i : v)
        {
            cout << i << " - ";
        }
        cout << endl;
    }
    catch (runtime_error e)
    {
        std::cerr << e.what() << '\n';
    }
}