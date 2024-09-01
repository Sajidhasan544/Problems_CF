#include <bits/stdc++.h>
using namespace std;

int main() {
    int c4 = 0;
    int c3 = 0, c1 = 0, c2 = 0, car = 0;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v[i] = x;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i) {
        if(v[i] == 4) {
            c4++;
        } else if(v[i] == 3) {
            c3++;
        } else if(v[i] == 1) {
            c1++;
        } else if(v[i] == 2) {
            c2++;
        }
    }

    car += c4;
    
    if(c3 < c1) {
        car += c3;
        c1 -= c3;
        c3 = 0;
    } else {
        car += c1;
        c3 -= c1;
        c1 = 0;
    }

    car += c3;
    
    car += c2 / 2;
    c2 %= 2;

    if(c2 > 0) {
        if(c1 <= 2) {
            car++;
            c1 = 0;
        } else {
            car++;
            c1 -= 2;
        }
    }
    
    car += (c1 + 3) / 4;

    cout << car << endl;

    return 0;
}
