#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin >>n;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < n; ++i){
        int key = v[i];
        int j = i -1;


        while (j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
        
    }

    for(auto it : v){
        cout<<it<<" ";
    }



}