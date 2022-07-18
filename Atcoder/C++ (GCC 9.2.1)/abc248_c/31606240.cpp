#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 998244353;

int n,m,k;
int memo[55][2555];
int dp(int idx,int remk){
    if(remk==0||idx==n){
        return 1;
    }
    else if(memo[idx][remk]!=-1){
        return memo[idx][remk];
    }
    else{
        int res=0;
        for(int i=0;i<m&&i<=remk;i++){
            res+=dp(idx+1,remk-i);
            res%=mod;
        }
        return memo[idx][remk]=res;
    }
}
void solve(){
    int i,j;
    cin>>n>>m>>k;
    k-=n;
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,k);
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

