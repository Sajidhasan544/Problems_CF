#include<bits/stdc++.h>
using namespace std;

    void f(int i,int rr[],int n){
        if(i >= n/2) return;
        swap(rr[i], rr[n - i -1]);
        f(i+1,rr,n);
    }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) cin>>arr[i];
    f(0,arr,n);
    for(int i = 0; i < n; ++i) cout<< arr[i]<<" ";
}