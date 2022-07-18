#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<int> adj[100005];
map<pii,int> mp;
int cnt[100005];
 
void dfs1(int idx,int prev){
    cnt[idx]=0;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs1(adj[idx][i],idx);
            cnt[idx]+=cnt[adj[idx][i]];
        }
    }
    if(idx>=prev){
        cnt[idx]+=mp[{prev,idx}];
    }
    else{
        cnt[idx]+=mp[{idx,prev}];
    }
    return ;
}
vector<int> res;
void dfs2(int idx,int prev){
    int c1=0;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev&&cnt[adj[idx][i]]){
            dfs2(adj[idx][i],idx);
            c1++;
        }
    }
    if(c1==0&&idx!=1){
        res.push_back(idx);
    }
    return ;
}
void solve(){
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n-1;i++){
        int x,y,t;
        cin>>x>>y>>t;
        adj[x].push_back(y);
        adj[y].push_back(x);
        if(x>y){
            swap(x,y);
        }
        if(t==2){
            mp[{x,y}]=1;
        }
        else{
            mp[{x,y}]=0;
        }
    }
    mp[{0,1}]=0;
    dfs1(1,0);
    dfs2(1,0);
    cout<<res.size()<<"\n";
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
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