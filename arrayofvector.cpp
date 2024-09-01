#include<bits/stdc++.h>
using namespace std;

void printv(vector<int> s){
    cout << "Vectors size : "<< s.size()<<endl;
    for(int i = 0; i < s.size(); ++i){
        cout << s[i]<<" ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    vector<int>v[N];
    for(int i = 0; i < N; ++i){
        int n;
        cin >> n;
        for(int j = 0; j < n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i = 0; i < N; ++i){
        printv(v[i]);
    }

    cout << v[0][0];


    return 0;
}