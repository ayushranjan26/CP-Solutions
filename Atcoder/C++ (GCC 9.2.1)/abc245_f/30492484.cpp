#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;


vector<int> adj[200005];
int color[200005],inCycle[200005],n,m;

bool dfs(int idx){
    int i;
    color[idx]=1;

    for(i=0;i<adj[idx].size();i++){
        int s=adj[idx][i];
        if(color[s]==0){
            if(dfs(s)){
                inCycle[idx]=1;
                inCycle[s]=1;
                return true;
            }
        }
        if(color[adj[idx][i]]==1){
            inCycle[idx]=1;
            inCycle[s]=1;
            return true;
        }
        if(inCycle[s]==1){
            inCycle[idx]=1;
        }
    }
    color[idx]=2;

    return false;
}

void solve(){
    int i,j;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    for(i=1;i<=n;i++){
        if(color[i]==0){
            dfs(i);
        }
    }
    int ans=0;
    for(i=1;i<=n;i++){
        if(inCycle[i]==1){
            ans++;
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

