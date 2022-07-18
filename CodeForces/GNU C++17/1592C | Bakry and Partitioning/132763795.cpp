#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<int> adj[100005];
int a[100005];
int cnt;
int all_xor;
 
int dfs(int idx,int prev){
    int xr=a[idx];
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            xr^=dfs(adj[idx][i],idx);
        }
    }
    if(xr==all_xor){
        cnt++;
        xr=0;
    }
    return xr;
}
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    all_xor=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
        all_xor^=a[i];
    }
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cnt=0;
    int xr=dfs(1,0);
    if((all_xor==0)||(k>2&&cnt>=3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    for(i=1;i<=n;i++){
        adj[i].clear();
    }
    return;
}
 
int32_t main(){
    //IOS;
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