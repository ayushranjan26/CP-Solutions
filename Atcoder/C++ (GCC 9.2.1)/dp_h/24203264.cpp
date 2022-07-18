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
    ll i,j,k,n,x;
    cin>>n;
    ll c[n];
    ll ans=1;
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c,c+n);
    for(i=0;i<n;i++){
        c[i]%=mod;
        ans=ans*(c[i]-i);
        ans%=mod;
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
