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
    ll i,j,m,n,k,d;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=-1e10;
    for(i=n-1;i>=0;i--){
        for(j=i-1;j>=0;j--){
            ans=max(ans,(i+1)*(j+1)-k*(a[i]|a[j]));
            if((i+1)*(j+1)<ans){
                break;
            }
        }
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
 