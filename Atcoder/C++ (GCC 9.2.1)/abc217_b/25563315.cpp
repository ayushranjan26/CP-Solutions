#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=998244353;
const int N=5005;
const int INF=1e18;

int memo[N][N];
int n;
vector<pair<int,int>> vp;
int dp(int idx,int sm){
    if(idx==n){
        return 1;
    }
    else if(memo[idx][sm]!=-1){
        return memo[idx][sm];
    }
    else{
        int res=0;
        if(sm>=vp[idx].sd){
            res+=dp(idx+1,sm-vp[idx].sd);
            res%=mod;
            res+=dp(idx+1,sm);
            res%=mod;
        }
        else{
            res+=dp(idx+1,sm);
            res%=mod;
        }
        memo[idx][sm]=res;
        return res;
    }
}

void solve(){
    int i,j,k;
    cin>>n;
    vp.resize(n);
    for(i=0;i<n;i++){
        cin>>vp[i].ft;
    }
    for(i=0;i<n;i++){
        cin>>vp[i].sd;
    }
    memset(memo,-1,sizeof(memo));
    sort(vp.rbegin(),vp.rend());
    int ans=0;
    for(i=0;i<n;i++){
        int sm=vp[i].ft-vp[i].sd;
        if(sm>=0){
            ans+=dp(i+1,sm);
            ans%=mod;
        }
    }
    cout<<ans;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
