#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

set<int> adj[200005];
set<int> radj[200005];

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    set<int> adj[n+1];
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        radj[v].insert(u);
    }
    queue<int> q;
    for(i=1;i<=n;i++){
        if(adj[i].size()==0){
            q.push(i);
        }
        //cout<<adj[i].size()<<" ";
    }
    int ans=n;
    while(!q.empty()){
        int d=q.front();
        q.pop();
        //cout<<d<<" ";
        ans--;
        for(auto it:radj[d]){
            adj[it].erase(d);
            if(adj[it].size()==0){
                q.push(it);
            }
        }
    }
    cout<<ans;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

