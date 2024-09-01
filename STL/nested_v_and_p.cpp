#include<bits/stdc++.h>
using namespace std;

void printv(vector<pair<int,int>> s){
    cout <<"size : "<< s.size()<<endl;
    for(int i = 0; i < s.size(); i++){
        cout<<s[i].first << " " << s[i].second<<endl;
    }
    cout <<endl;
}

int main(){
   vector<pair<int,int>> v;// ={{1,2}, {3,4}, {4,6}};
    printv(v);
    int n;
    cin >>n;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
        //same as v.push_back(make_pair(x,y));
    }
        
    printv(v);
}