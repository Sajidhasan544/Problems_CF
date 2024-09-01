#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    int n;
    cin >> n;
    while (n--)
    {
        string st;
        cin >> st;
        s.insert(st);
    }
    for(auto val: s){
        cout<< val <<" ";
    }
    
}
