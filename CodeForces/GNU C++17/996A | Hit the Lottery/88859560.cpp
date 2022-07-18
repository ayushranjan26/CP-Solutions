/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
int rec(int n){
 
}
 
 
void solve(){
    int n;
    cin>>n;
    int ans=0;
    ans+=n/100;
    n=n%100;
    ans+=n/20;
    n=n%20;
    ans+=n/10;
    n=n%10;
    ans+=n/5;
    n=n%5;
    ans+=n/1;
    cout<<ans;
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