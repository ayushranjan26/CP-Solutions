#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<int> adj[100005];
int res[100005];
map<pii,int> midx;
 
void dfs(int idx,int prev,int cnt){
    int i;
    //cout<<idx<<" "<<cnt<<endl;
    if(prev!=-1){
        //cout<<midx[{idx,prev}]<<endl;
        if(cnt%2==0){
            res[midx[{idx,prev}]]=2;
        }
        else{
            res[midx[{idx,prev}]]=3;
        }
    }
    for(i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs(adj[idx][i],idx,cnt+1);
        }
    }
}
 
void solve(){
    int i,j,n;
    cin>>n;
    int deg[n]={0};
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        midx[{u,v}]=i;
        midx[{v,u}]=i;
        deg[u]++,deg[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool flg=false;
    j=0;
    for(i=0;i<n;i++){
        if(deg[i]>2){
            flg=true;
        }
        if(deg[i]==1){
            j=i;
        }
    }
    if(flg){
        cout<<"-1";
    }
    else{
        dfs(j,-1,0);
        for(i=0;i<n-1;i++){
            cout<<res[i]<<" ";
        }
    }
    for(i=0;i<n;i++){
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 