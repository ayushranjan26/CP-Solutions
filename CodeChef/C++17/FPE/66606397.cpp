#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n,a[300005],sum[300005],gd[300005];
vector<int> adj[300005];

void dfs(int idx,int prev){
    gd[idx]=a[idx];
    sum[idx]=0;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs(adj[idx][i],idx);
            gd[idx]=__gcd(gd[idx], gd[adj[idx][i]] );
            sum[idx]+=gd[adj[idx][i]];
        }
    }
}
int res;
void dfs2(int idx,int prev,int sm){
    res=max(res,sm+sum[idx]);

    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs2(adj[idx][i],idx,sm+sum[idx]-gd[adj[idx][i]]);
        }
    }
}

void solve(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,-1);
    res=1;
    dfs2(0,-1,0);
    cout<<res;
    for(i=0;i<=n;i++){
        adj[i].clear();
        a[i]=0;
        gd[i]=0;
        sum[i]=0;
    }
    return;
}

int32_t main(){
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
