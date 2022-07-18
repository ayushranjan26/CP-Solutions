#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
ll a[2000001];
void solve(){
    ll i,j,n,d;
    cin>>n;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
        cin>>d;
        a[d]++;
    }
    ll ans=0;
    for(i=0;i<2000001;i++){
        ans+=a[i]*(n-a[i]);
    }
    cout<<ans;
    return;
}

int main(){
    IOS;
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

