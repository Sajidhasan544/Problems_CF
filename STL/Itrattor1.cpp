#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
    auto it = v.begin();

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }

    cout << "\n";

    vector<pair<int,int>> vv = {{1,2},{2,3},{3,4}};
    auto itt = vv.begin();
    for(itt = vv.begin(); itt != vv.end(); ++itt){
        cout << itt -> first <<" "<<itt -> second<<"\n";
    }
    for(auto val: vv){
        cout << val.first<<" "<<val.second<< "\n";
    }
}
