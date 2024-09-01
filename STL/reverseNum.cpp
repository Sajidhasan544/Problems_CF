#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dup = n;
    int dups = n;
    int rev = 0;
    int sum = 0;
    int ds = 0;

    while (dups>0){
        dups = dups / 10;
        ds++;
    }
    
    while (n>0){
        int lastd = n % 10;
        int sds = 1;
        for(int i = 0; i < ds; ++i){
            sds = sds*lastd;
        }

        sum = sum + sds;

        n = n / 10;
        rev = (rev*10)+lastd;
    }

    cout << sum << endl;

    if(dup == rev) cout <<"It is palindram \n";
    else cout <<"It is not palindram \n";

    if(sum == dup) cout<<"It is an Amostrong \n";
    else cout << "It is not amostrong\n";
    

    return 0;
}