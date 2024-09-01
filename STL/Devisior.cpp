#include<bits/stdc++.h>
using namespace std;

void printDevisior(int n){
    vector<int>ls;
    for(int i = 1; i*i <=n; i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
            ls.push_back(n/i);
            }
        } 
    }

    sort(ls.begin(),ls.end());
    for(auto a: ls){
        cout << a <<" ";
    }
    cout <<"\n";
}

int main(){
    int n;
    cin >> n;
    printDevisior(n);

    return 0;
    
}