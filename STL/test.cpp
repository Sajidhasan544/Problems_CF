#include<bits/stdc++.h>
using namespace std;

int main(){
    int z = 1;
    vector<int> v;
    vector<int> vs;
    vector<int>s;
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m;++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        for(int j = i + 1; j < v.size();++j){
            if(v[i] == v[j]){
                vs.push_back(v[j]);
            }
        }
    }

    for(int i = 0; i < n;++i){
        int x = v[i];
        s.push_back(x);
    }

    auto it = unique(v.begin(),v.end());
    auto itt = unique(s.begin(),s.end());


    v.erase(it,v.end());
    s.erase(itt,s.end());

    auto min =  min_element(s.begin(), s.end());
    auto max =  max_element(s.begin(), s.end());

    int miin = *min;
    int maax = *max;

    for(int i = 0; i < v.size();++i){
        cout << v[i] <<" ";
    }
    cout << endl;

    for(int i = 0; i < s.size(); ++i){
        cout << s[i] <<" ";
    }

    cout << endl;
    for(int i = 0; i < vs.size();++i){
        cout << vs[i]<<" ";
    }

    if(vs.size() >= n){
        cout <<"0"<<endl;
    }else if(vs.size() < n){
        int x = vs.size();
            for(int i = 0; i < n - x;++i){
                z++;
            }
    }

    cout << endl<< endl << endl << z;

}