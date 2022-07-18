#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

int x[100005],n;
vector<int> adj[100005];
multiset<int> st[100005];

void dfs(int idx,int prev){
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs(adj[idx][i],idx);
            auto it=st[adj[idx][i]].begin();
            while(it!=st[adj[idx][i]].end()){
                st[idx].insert(*it);
                it++;
            }
            while(st[idx].size()>=22){
                st[idx].erase(st[idx].begin());
            }
        }
    }
    st[idx].insert(x[idx]);
    while(st[idx].size()>=22){
        st[idx].erase(st[idx].begin());
    }
}
void solve(){
    int i,j,q;
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,-1);
    while(q--){
        int v,k;
        cin>>v>>k;
        v--;
        auto it=st[v].end();
        while(k--){
            it--;
        }
        cout<<*it<<"\n";
    }
    return;
}

int32_t main(){
    IOS;
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
