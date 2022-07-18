#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<int> adj[200001];
 
int dfs(int idx,int prev){
    int i,ht=0;
    //cout<<idx<<" ";
    for(i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            ht=max(ht,1+dfs(adj[idx][i],idx));
        }
    }
    return ht;
}
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int p[n+1]={0},idx=0;
    for(i=1;i<n;i++){
        if(a[i-1]<a[i]){
            p[a[i]]=a[idx];
        }
        else{
            idx++;
            p[a[i]]=a[idx];
        }
    }
    for(i=2;i<=n;i++){
       // cout<<p[i]<<" ";
        adj[i].push_back(p[i]);
        adj[p[i]].push_back(i);
    }
    cout<<dfs(1,0);
    for(i=1;i<=n;i++){
        adj[i].clear();
    }
    return;
}
 
int32_t main(){
    //IOS;
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