#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
int n,h[100001],memo[100001];

ll dp(int idx){
    if(idx<=1){
        return 0;
    }
    if(memo[idx]!=-1){
        return memo[idx];
    }
    else{
        memo[idx]=min(abs(h[idx]-h[idx-1])+dp(idx-1),abs(h[idx]-h[idx-2])+dp(idx-2));
        return memo[idx];
    }
}
void solve(){
    ll i,j,k,m;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>h[i];
        memo[i]=-1;
    }
    h[0]=h[1];
    memo[0]=-1;
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
