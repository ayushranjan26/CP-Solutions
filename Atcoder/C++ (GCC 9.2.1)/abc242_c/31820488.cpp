#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

int memo[1000001][10],n;
int dp(int idx,int prev){
    if(prev<1||prev>9){
        return 0;
    }
    else if(idx==n){
        return 1;
    }
    else if(memo[idx][prev]!=-1){
        return memo[idx][prev];
    }
    else{
        int res=0;
        res=dp(idx+1,prev)+dp(idx+1,prev+1)+dp(idx+1,prev-1);
        res%=mod;
        return memo[idx][prev]=res;
    }
}
void solve(){
    int i,j;
    cin>>n;
    memset(memo,-1,sizeof(memo));
    int res=0;
    for(i=1;i<=9;i++){
        res+=dp(1,i);
        res%=mod;
    }
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
