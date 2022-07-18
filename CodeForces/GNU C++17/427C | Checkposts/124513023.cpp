#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
const int N=1e5+1;
int x[N],m,n;
stack<int> stk;
vector<int> adj[N];
vector<int> rev_adj[N];
int vis[N];
vector<int> comp;
void dfs1(int idx){
    vis[idx]=1;
    for(int i=0;i<adj[idx].size();i++){
        if(vis[adj[idx][i]]!=1){
            dfs1(adj[idx][i]);
        }
    }
    stk.push(idx);
}
 
void dfs2(int idx){
    vis[idx]=1;
    comp.push_back(x[idx-1]);
    for(int i=0;i<rev_adj[idx].size();i++){
        if(vis[rev_adj[idx][i]]!=1){
            dfs2(rev_adj[idx][i]);
        }
    }
}
void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>m;
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        rev_adj[y].push_back(x);
    }
    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++){
        if(vis[i]!=1){
            dfs1(i);
        }
    }
    memset(vis,0,sizeof(vis));
    vector<vector<int>> z;
    while(!stk.empty()){
        int d=stk.top();
        stk.pop();
        if(vis[d]!=1){
            dfs2(d);
        }
        sort(comp.begin(),comp.end());
        z.push_back(comp);
        comp.clear();
    }
    ll cost=0,ways=1;
    for(i=0;i<z.size();i++){
        int cnt=0,ct=0;
        for(j=0;j<z[i].size();j++){
            if(z[i][j]==z[i][0]){
                cnt++;
                ct=z[i][j];
            }
            //cout<<z[i][j]<<" ";
        }
        //cout<<endl;
        if(cnt!=0){
            ways*=cnt;
        }
        ways%=mod;
        cost+=ct;
    }
    cout<<cost<<" "<<ways;
    return;
}
 
int main(){
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
 
 