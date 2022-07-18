#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n,k;
vector<int> adj[200005], is[200005];
int cnt[200005];
vector<int> v;

void dfs(int idx,int prev,bool f){
    cnt[idx]=1;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            if(f){
                if(is[idx][i]==1){
                    dfs(adj[idx][i],idx,false);
                    v.push_back(cnt[adj[idx][i]]);
                }
                else{
                    dfs(adj[idx][i],idx,f);
                }
            }
            else{
                dfs(adj[idx][i],idx,f);
            }
            cnt[idx]+=cnt[adj[idx][i]];
        }
    }

}

void solve(){
    int i,j;
    cin>>n>>k;
    k=n-k;
    for(i=0;i<n-1;i++){
        int u,v,c;
        cin>>u>>v>>c;
        adj[u].push_back(v);
        adj[v].push_back(u);
        is[u].push_back(c);
        is[v].push_back(c);
    }
    dfs(1,0,true);
    sort(v.rbegin(),v.rend());
    bool fg=false;
    if(k==0){
        cout<<0;
        for(i=0;i<=n;i++){
            cnt[i]=0;
            adj[i].clear();
            is[i].clear();
        }
        v.clear();
        return;
    }
    for(i=0;i<v.size();i++){
        k-=v[i];
        if(k<=0){
            cout<<i+1;
            fg=true;
            break;
        }
    }
    if(!fg){
        cout<<-1;
    }
    for(i=0;i<=n;i++){
        cnt[i]=0;
        adj[i].clear();
        is[i].clear();
    }
    v.clear();
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
