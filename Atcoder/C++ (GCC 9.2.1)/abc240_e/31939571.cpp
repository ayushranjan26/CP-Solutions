#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

vector<int> adj[200005];
int l[200005],r[200005];
int c;
void dfs(int idx,int prev){
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]==prev){
            continue;
        }
        else{
            dfs(adj[idx][i],idx);
        }
        if(l[idx]==0){
            l[idx]=l[adj[idx][i]];
        }
        else{
            l[idx]=min(l[idx], l[adj[idx][i]]);
        }
        if(r[idx]==0){
            r[idx]=r[adj[idx][i]];
        }
        else{
            r[idx]=max(r[idx], r[adj[idx][i]]);
        }
    }
    if(adj[idx].size()==1&&idx!=1){
        l[idx]=c;
        r[idx]=c;
        c++;
    }
    //cout<<idx<<" "<<l[idx]<<" "<<r[idx]<<endl;
}
void solve(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //cout<<endl;
    c=1;
    dfs(1,0);
    for(i=1;i<=n;i++){
        cout<<l[i]<<" "<<r[i]<<endl;
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
