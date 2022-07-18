#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

int n, a[300005], b[300005];
vector<int> adj[300005];
int memo[300005][2][2];
int dfs(int idx,int prev,bool f,int col){
    int res=0;
    if(memo[idx][f][col]!=-1){
        return memo[idx][f][col];
    }
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            int val=1e9;
            if(!f){
                if(a[adj[idx][i]]!=b[adj[idx][i]]){
                    val=min(val,1+dfs(adj[idx][i],idx,true,b[adj[idx][i]]) );
                }
                else{
                    val=min(val,dfs(adj[idx][i],idx,false,b[adj[idx][i]]) );
                    val=min(val,1+dfs(adj[idx][i],idx,true,b[adj[idx][i]]) );
                }
            }
            else{
                if(col!=b[adj[idx][i]]){
                    val=min(val,1+dfs(adj[idx][i],idx,true,b[adj[idx][i]]) );
                }
                else{
                    val=min(val,dfs(adj[idx][i],idx,true,b[adj[idx][i]]) );
                }
            }
            res+=val;
        }
    }

    //cout<<idx<<" "<<f<<" "<<col<<" "<<res<<" \n";
    return memo[idx][f][col]=res;
}

void solve(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i+1];
    }
    for(i=0;i<n;i++){
        cin>>b[i+1];
    }
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int res=1e9;
    if(a[1]!=b[1]){
        res=min(res,1+dfs(1,0,true,b[1]) );
    }
    else{
        res=min({res,dfs(1,0,false,0),1+dfs(1,0,true,b[1]) });
    }
    cout<<res;
    for(i=0;i<=n;i++){
        memo[i][0][0]=-1;
        memo[i][0][1]=-1;
        memo[i][1][0]=-1;
        memo[i][1][1]=-1;
        a[i]=0;b[i]=0;
        adj[i].clear();
    }
    return;
}

int32_t main(){
    IOS;
    memset(memo,-1,sizeof(memo));
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
