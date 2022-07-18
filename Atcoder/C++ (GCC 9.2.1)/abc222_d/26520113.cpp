#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 998244353;

int dp[3005][3005];
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    memset(dp,0,sizeof(dp));
    for(i=a[n-1];i<=b[n-1];i++){
        dp[i][n-1]=1;
    }
    for(i=3000;i>=0;i--){
        dp[i][n-1]+=dp[i+1][n-1];
        dp[i][n-1]%=mod;
    }
    for(j=n-2;j>=0;j--){
        for(i=a[j];i<=b[j];i++){
            dp[i][j]=dp[i][j+1];
        }
        for(i=3000;i>=0;i--){
            dp[i][j]+=dp[i+1][j];
            dp[i][j]%=mod;
        }
    }

    cout<<dp[0][0];
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
