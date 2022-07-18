 #include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 998244353;
vector<int> adj[200005];
int vis[200005];
int cnt=0;
void dfs(int idx,int prev){
    vis[idx]=1;
    for(int i=0;i<adj[idx].size();i++){
        if(vis[adj[idx][i]]==0){
            dfs(adj[idx][i],idx);
        }
        else if(adj[idx][i]!=prev&&vis[adj[idx][i]]==1){
            cnt++;
        }
    }
    vis[idx]=2;
}

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int res=1;
    for(i=1;i<=n;i++){
        if(vis[i]==0){
            cnt=0;
            dfs(i,0);
            if(cnt==1){
                res*=2;
                res%=mod;
            }
            else{
                res=0;
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
