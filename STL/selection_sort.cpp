#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    int n;
    cin >> n;
    for(int i = 0;i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    for(int i = 0; i < v.size()-1; ++i){
        int min = i;
        for(int j = i+1; j < v.size();++j){
            if(v[min] > v[j]){
                min = j;
            }
        }

        swap(v[i],v[min]);
    }




    for(auto it : v){
        cout<<it<<" ";
    }
}