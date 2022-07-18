#include <bits/stdc++.h>

#define ll long long int
#define lld
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//

int n,m;
vector<int> v[100001];
int dp[100001];
int longest_path(int idx){
    int path=0;
    if(dp[idx]!=-1){
        return dp[idx];
    }
    for(int i=0;i<v[idx].size();i++){
        path=max(path,1+longest_path(v[idx][i]));
    }
    dp[idx]=path;
    return dp[idx];
}
void solve(){
    int i,j;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
    }
    int ans=0;
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++){
        dp[i]=longest_path(i);
        ans=max(ans,dp[i]);
    }
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

