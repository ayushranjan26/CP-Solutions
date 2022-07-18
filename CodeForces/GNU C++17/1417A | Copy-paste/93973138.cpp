/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a,a+n);
    ll ans=0;
    for(int i1=1;i1<n;i1++){
        ans+=(k-a[i1])/a[0];
    }
    cout<<ans;
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}