#include<bits/stdc++.h>
using namespace std;

void printv(vector<int> v){
    cout << "Size : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}

void printv(vector<string> v){
    cout << "Size : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        printv(v);
        v.push_back(x);
    }
    printv(v);
    cout<<"\n\n\n";


    vector<int> s(5);
    cout<<"S vectors : "<<endl;
    printv(s);
    s.push_back(10);
    printv(s);
    s.pop_back();
    printv(s);
    cout <<"\n\n\n";
    


    vector<int> j(5,3);
    cout<<"J vectors : "<<endl;
    printv(j);
    j.push_back(7);
    printv(j);
    j.pop_back();
    printv(j);


    vector<string> st;
    int z;
    cin >> z;
    for(int i = 0; i < z; i++){
        string f;
        cin >> f;
        st.push_back(f);
    }

    printv(st);
    return 0;
}