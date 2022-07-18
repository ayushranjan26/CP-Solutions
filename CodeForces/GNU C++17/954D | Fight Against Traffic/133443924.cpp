#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 998244353;
 
void solve(){
    int i,j,n,m,s,t;
    cin>>n>>m>>s>>t;
    vector<int> adj[n+1];
    set<pii> st;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(u>v){
            swap(u,v);
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
        st.insert({u,v});
    }
    vector<int> dis_t(n+1,3000);
    vector<int> dis_s(n+1,3000);
    dis_s[s]=0;
    dis_t[t]=0;
 
    queue<int> q;
    vector<int> vis(n+1,0);
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(i=0;i<adj[v].size();i++){
            dis_s[adj[v][i]]=min(dis_s[adj[v][i]],dis_s[v]+1);
            if(vis[adj[v][i]]==0){
                vis[adj[v][i]]=1;
                q.push(adj[v][i]);
            }
        }
    }
 
    vector<int> vis2(n+1,0);
    q.push(t);
    vis2[t]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(i=0;i<adj[v].size();i++){
            dis_t[adj[v][i]]=min(dis_t[adj[v][i]],dis_t[v]+1);
            if(vis2[adj[v][i]]==0){
                vis2[adj[v][i]]=1;
                q.push(adj[v][i]);
            }
        }
    }
 
    int dis=dis_s[t];
    int res=0;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(dis_s[i]+dis_t[j]+1>=dis&&dis_s[j]+dis_t[i]+1>=dis&&st.find({i,j})==st.end()){
                res++;
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