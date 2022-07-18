#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

int dp[1005][5005];
void solve(){
    int i,j,n,m,k;
    cin>>n>>m>>k;
    for(i=0;i<m;i++){
        dp[0][i]=1;
    }
    int pre[m],suf[m];
    for(i=1;i<n;i++){
        for(j=0;j<m;j++){
            pre[j]=dp[i-1][j];
            suf[j]=dp[i-1][j];
        }
        for(j=1;j<m;j++){
            pre[j]+=pre[j-1];
            pre[j]%=mod;
        }
        for(j=m-2;j>=0;j--){
            suf[j]+=suf[j+1];
            suf[j]%=mod;
        }
        for(j=0;j<m;j++){
            dp[i][j]=0;
            if(j+k<m){
                dp[i][j]+=suf[j+k];
                dp[i][j]%=mod;
            }
            if(j-k>=0){
                dp[i][j]+=pre[j-k];
                dp[i][j]%=mod;
            }
            if(k==0){
                dp[i][j]-=dp[i-1][j];
                dp[i][j]+=mod;
                dp[i][j]%=mod;
            }
        }
    }
    int res=0;
    for(i=0;i<m;i++){
        res+=dp[n-1][i];
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
