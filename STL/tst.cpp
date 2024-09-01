#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int cnt = 0;
    for(int i = 0; i < 4; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size()-1; ++i){
        for(int j = i+1; j < v.size();++j){
            if(v[i] == v[j]){
                cnt++;
                break;
            }
        }
    }

    cout<<cnt<<endl;



}