#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int dp[n][m+1],ans=0;
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++){
        dp[i][m-1]=1;
        dp[i][m]=1;
    }
    for(i=n-2;i>=0;i--){
        dp[i][m-1]+=dp[i+1][m-1];
    }
 
    for(j=m-2;j>=0;j--){
        for(i=0;i<n;i++){
            dp[i][j]=dp[i][j+1];
        }
        for(i=n-2;i>=0;i--){
            dp[i][j]+=dp[i+1][j];
            dp[i][j]%=mod;
        }
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            ans+=dp[n-1-i][1]*dp[j][1];
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