/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
using namespace std;

    int chkpower2(int x){
        return (x&&!(x&x-1));
    }


    void solve(){
        int d1,n;
        cin>>n;
        d1=1000-n%1000;
        d1=d1%1000;
        cout<<d1;
    }

    int main()
    {
        //ios::sync_with_stdio(0);
        //cin.tie(0);

        int t;
       t=1;//cin>>t;
        while(t--){
            solve();
            cout<<"\n";
        }
        return 0;
    }
