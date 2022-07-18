#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int power(int a,int b) {
    int result=1;
    while(b)
    {   if(b%2) result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}
 
vector<int> adj[100005];
int vis[100005];
int dfs(int idx){
    int i,res=1;
    for(i=0;i<adj[idx].size();i++){
        if(vis[adj[idx][i]]==0){
            vis[adj[idx][i]]=1;
            res+=dfs(adj[idx][i]);
        }
    }
    return res;
}
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    for(i=0;i<n-1;i++){
        int u,v,x;
        cin>>u>>v>>x;
        if(x==0){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    vector<int> sz;
    int ans=power(n,k);
    for(i=1;i<=n;i++){
        if(vis[i]==0){
            vis[i]=1;
            j=dfs(i);
            sz.push_back(j);
            ans=(ans-power(j,k)+mod)%mod;
            //cout<<j<<" ";
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
        cout<<"\n";
        tc++;
    }
    return 0;
}