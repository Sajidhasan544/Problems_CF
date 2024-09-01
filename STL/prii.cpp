#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    istringstream iss(s);
    vector<int> arr;
    int temps;
    while (iss >> temps)
    {
        arr.push_back(temps);
    }

    cout << "converted int " << endl;
    cout << arr[1];
}