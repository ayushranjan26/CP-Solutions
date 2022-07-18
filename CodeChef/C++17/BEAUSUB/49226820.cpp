#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=998244353;

void solve(){
    int i,j,k,n;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int dp[1001][k+1],ma[k+1]={0};
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++){
        for(j=k;j>=0;j--){
            if(j==0){
                dp[a[i]][j]++;
            }
            else{
                dp[a[i]][j]=max(ma[j-1]+1,dp[a[i]][j]+1);
            }
            ma[j]=max(ma[j],dp[a[i]][j]);
        }
    }
    int ans=0;
    for(i=0;i<n;i++){
        for(j=0;j<=k;j++){
            ans=max(ans,dp[a[i]][j]);
        }
    }
    cout<<ans;
    return;
}

int main(){
    IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}

