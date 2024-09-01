#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    int n;
    cin >> n;
    long long q;
    long long y;
    for(int i = 0; i < n; ++i){
        long long x;
        cin >> x;
        s.insert(x);
    }
    
    cin >> q;
    while(q--){
        cin >> y;
        auto it = s.find(y);
        if(it != s.end()){
            long long pos = distance(s.begin(), it);
            cout << "Yes " << pos + 1 << endl;
        } else {
            long long pos = distance(s.begin(), it);
            cout << "No " << pos << endl;
        }
    }

    return 0;
}
