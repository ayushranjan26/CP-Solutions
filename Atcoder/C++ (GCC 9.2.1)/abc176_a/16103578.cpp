/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}
int n;


void solve(){
    int n;
    cin>>n;
    if(n>=30){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}

int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);

    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
