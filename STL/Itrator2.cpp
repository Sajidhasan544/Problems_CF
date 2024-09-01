#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,4,5,6,7};
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] <<" ";
    }
    cout << endl;

    vector <int> ::iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << (*it) << " ";
    }
    cout << endl;
    //ranged based loop.
    for(int &value : v){
        value++;
        //cout << value <<" ";
    }

    for(int vs : v){
        cout << vs <<" ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1,2},{3,4},{5,6}};
    for(pair<int,int> &value : v_p){
        cout << value.first << " " << value.second << " ";
    }
    //auto kayword.
    auto a = 1;
    cout << a << endl;

    for(auto it = v.begin(); it != v.end(); ++it){
        cout << (*it) <<" ";
    }
    cout << endl;

    for(auto &value : v_p){
        cout << value.first << " " << value.second << " ";
    }


}