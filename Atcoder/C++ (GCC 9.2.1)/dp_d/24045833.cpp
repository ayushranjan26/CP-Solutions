#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
int n,h[100001],memo[100001],k;

ll dp(int idx){
    if(idx==1){
        return 0;
    }
    if(memo[idx]!=-1){
        return memo[idx];
    }
    else{
        ll mn=1e9;
        for(int i=1;i<=k;i++){
            if(idx-i>=1){
                mn=min(mn,dp(idx-i)+abs(h[idx]-h[idx-i]));
            }
        }
        memo[idx]=mn;
        return memo[idx];
    }
}
void solve(){
    ll i,j,m;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>h[i];
        memo[i]=-1;
    }
    ll ans=dp(n);
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
