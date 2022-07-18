#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod =  998244353;
int ver,edg=0;
vector<int> adj[200005];
int vis[200005];
void dfs(int idx){
    ver++;
    //cout<<idx<<"- ";
    for(int i=0;i<adj[idx].size();i++){
        if(vis[adj[idx][i]]!=1){
            vis[adj[idx][i]]=1;
            dfs(adj[idx][i]);
        }
        edg++;
    }
}
 
void solve(){
    int i,j,n,m;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res=1;
    for(i=1;i<=n;i++){
        if(vis[i]!=1){
            vis[i]=1;
            ver=0,edg=0;
            dfs(i);
            edg/=2;
            int cyc=ver-edg+1;
            if(cyc==1){
                res*=2;
                res%=mod;
            }
            else{
                res=0;
            }
        }
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