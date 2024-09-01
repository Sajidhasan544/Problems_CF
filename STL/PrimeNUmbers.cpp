#include <bits/stdc++.h>
using namespace std;

void printPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "It is an prime number.\n";
    else
        cout << "It is not e prime number.\n";
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);
}