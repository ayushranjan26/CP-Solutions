#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n;
    ll ans=0,a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        ans=max(ans,a[i]*a[i-1]);
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
 