#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod= 998244353;

int n;
vector<int> adj[200005];
int children[200005];
int ans[200005];
int c=0;

int dfs1(int idx,int prev){
    int cnt=0;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev)
            cnt+=1+dfs1(adj[idx][i],idx);
    }
    children[idx]=cnt;
    return cnt;
}

void dfs2(int idx,int prev,int dist){
    ans[1]+=dist;
    //cout<<dist<<"-"<<ans[1]<<endl;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs2(adj[idx][i],idx,dist+1);
        }
    }
}

void dfs3(int idx,int prev){
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            ans[adj[idx][i]]=ans[idx]+(n-1-children[adj[idx][i]]-1)-(children[adj[idx][i]]);
            dfs3(adj[idx][i],idx);
        }
    }
}

void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    children[1]=dfs1(1,-1);
    dfs2(1,-1,0);
    dfs3(1,-1);
    for(i=1;i<=n;i++){
        cout<<ans[i]<<"\n";
    }
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
