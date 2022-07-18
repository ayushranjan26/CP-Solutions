#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

vector<int> adj[2003];
int n,m,k,s,t,x;
int memo[2003][2003][2];
int dp(int idx,int remk,int par){
    par%=2;
    if(remk==0){
        if(idx==t&&par%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(memo[idx][remk][par]!=-1){
        return memo[idx][remk][par];
    }
    else{
        int res=0;
        for(int i=0;i<adj[idx].size();i++){
            if(adj[idx][i]==x){
                par++;
            }
            res+=dp(adj[idx][i],remk-1,par%2);
            res%=mod;
            if(adj[idx][i]==x){
                par--;
            }
        }
        return memo[idx][remk][par]=res;
    }
}
void solve(){
    int i,j;
    cin>>n>>m>>k>>s>>t>>x;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(memo,-1,sizeof(memo));
    cout<<dp(s,k,0);
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

