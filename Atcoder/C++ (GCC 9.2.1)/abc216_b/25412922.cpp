#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=998244353;
const int N=1e5+6;

int n;
string s;
ll memo[1005][3000][12];

int dp(int idx,int mask,int prev){
    if(idx==n){
        return 1;
    }
    else if(memo[idx][mask][prev]!=-1){
        return memo[idx][mask][prev];
    }
    else{
        ll res=0;
        int cur=s[idx]-'A'+1;
        if(prev==cur){
            res+=dp(idx+1,mask|(1<<cur),cur);
        }
        if((mask&(1<<cur))==0){
            res+=dp(idx+1,mask|(1<<cur),cur);
        }
        res%=mod;
        res+=dp(idx+1,mask,prev);
        res%=mod;
        memo[idx][mask][prev]=res;
        return res;
    }
}

void solve(){
    int i,j,k;
    cin>>n>>s;
    memset(memo,-1,sizeof(memo));
    int ans=dp(0,0,0)-1;
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
