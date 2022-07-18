#include <bits/stdc++.h>

#define ll long long int
#define lld
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

int n,W;
int v[101],w[101];
ll dp[101][100001];

void solve(){
    int i,j;
    cin>>n>>W;
    for(i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(i=0;i<101;i++){
        for(j=0;j<100001;j++){
            dp[i][j]=1e18;
        }
    }
    dp[0][0]=0;
    dp[0][v[0]]=w[0];

    for(int i=1;i<n;i++){
        dp[i][0]=0;
        for(j=1;j<100001;j++){
            dp[i][j]=dp[i-1][j];
            if(j-v[i]>=0){
                dp[i][j]=min(dp[i][j],w[i]+dp[i-1][j-v[i]]);
            }
        }
    }
    for(i=100000;i>=0;i--){
        if(dp[n-1][i]<=W){
            cout<<i;
            return;
        }
    }
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

