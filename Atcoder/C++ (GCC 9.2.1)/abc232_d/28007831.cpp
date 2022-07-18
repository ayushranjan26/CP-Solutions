#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int dp[n][m];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(s[i][j]=='#'){
                continue;
            }
            if(i!=0&&dp[i-1][j]!=0){
                dp[i][j]=max(dp[i][j],dp[i-1][j]+1);
            }
            if(j!=0&&dp[i][j-1]!=0){
                dp[i][j]=max(dp[i][j],dp[i][j-1]+1);
            }
        }
    }
    int res=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            res=max(res,dp[i][j]);
            //cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
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
