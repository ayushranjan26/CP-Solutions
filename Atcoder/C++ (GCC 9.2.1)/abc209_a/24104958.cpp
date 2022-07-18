#include <bits/stdc++.h>

#define ll long long int
#define lld
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
string s,t;
void solve(){
    int i,j,n,m;
    cin>>s>>t;
    n=s.size(),m=t.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string ans="";
    int d=dp[n][m];
    for(i=n;i>0;i--){
        for(j=m;j>0;j--){
            if(dp[i][j]==1+dp[i-1][j-1]&&s[i-1]==t[j-1]&&dp[i][j]==d){
                ans+=s[i-1];
                //cout<<dp[i][j]<<" "<<i<<" "<<j<<" "<<ans<<endl;
                d--;
                break;
            }
        }
    }
    reverse(ans.begin(),ans.end());
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

