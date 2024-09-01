#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; ++i){
        string s;
        cin >> s;
        cout<<m[s]<<endl;
        m[s] += 2;
    }

    // for(auto vl: m){
    //     cout << vl.first<<" "<<"\n";
    // }
    
}