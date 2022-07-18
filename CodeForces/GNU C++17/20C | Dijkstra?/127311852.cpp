#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+1;
const int INF=1e18;
 
vector<pair<int,int>> adj[N];
int d[N],p[N];
void dijkstra(int src){
    int i,j;
    for(i=0;i<N;i++){
        d[i]=INF;
        p[i]=-1;
    }
    set<pair<int,int>> q;
    q.insert({0,src});
    d[src]=0;
    while(!q.empty()){
        int v=q.begin()->sd;
        q.erase(q.begin());
        for(auto it:adj[v]){
            int len,to;
            len=it.sd;
            to=it.ft;
            if(d[v]+len<d[to]){
                q.erase({d[to],to});
                d[to]=len+d[v];
                p[to]=v;
                q.insert({d[to],to});
            }
        }
    }
}
 
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    dijkstra(1);
    if(d[n]==INF){
        cout<<"-1";
        return;
    }
    vector<int> path;
    path.push_back(n);
    i=n;
    while(p[i]!=-1){
        path.push_back(p[i]);
        i=p[i];
    }
    reverse(path.begin(),path.end());
    for(i=0;i<path.size();i++){
        cout<<path[i]<<" ";
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