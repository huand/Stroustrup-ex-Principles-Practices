#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void c04e11()
{
    int N;
    cout << "Compute the prime numbers between 1 and (enter a number): ";
    cin >> N;
    cin.ignore();
    vector<int> numbers;
    vector<int> primes;

    for (int i = 1; i <= N; i++)
    {
        numbers.push_back(i);
    }
    auto isprime = [&](int x) {
        bool isp = true;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                isp = false;
                break;
            }
        }
        if (isp)
        {
            primes.push_back(x);
            cout << x << endl;
        }
    };
    for_each(numbers.begin(), numbers.end(), isprime);

    for (auto &&i : primes)
    {
        cout << i << ", ";
    }
}