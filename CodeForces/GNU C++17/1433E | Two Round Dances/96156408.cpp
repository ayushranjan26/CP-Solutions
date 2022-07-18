/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
//-24 -14
//4 1 24 27 13 1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    ll n;
    cin>>n;
    ll ans=1;
    for(int i1=1;i1<=n;i1++){
        ans*=i1;
    }
    ans=ans/n;
    ans=((2*ans)/n);
    if(n==2){
        ans=1;
    }
    cout<<ans;
    return;
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