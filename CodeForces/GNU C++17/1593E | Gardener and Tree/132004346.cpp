#include <bits/stdc++.h>
 
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    set<pair<int,int>> st;
    set<int> adj[n];
    int sz[n]={0};
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        u--,v--;
        sz[u]++,sz[v]++;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    set<int> res;
    for(i=0;i<n;i++){
        st.insert({sz[i],i});
        res.insert(i);
    }
    if(k>=n-1){
        cout<<"0";
        return ;
    }
    int csz=n;
    while(k--){
        vector<int> v;
        vector<int> v2;
        while((!st.empty())&&st.begin()->ft==1){
            int x=st.begin()->sd,y;
            y=*(adj[x].begin());
            v.push_back(y);
            v2.push_back(x);
            adj[x].clear();
            sz[x]=0;
            csz--;
            res.erase(x);
            st.erase(st.begin());
        }
        for(i=0;i<v.size();i++){
            st.erase({sz[v[i]],v[i]});
            sz[v[i]]--;
            if(sz[v[i]]==0){
                csz--;
            }
            st.insert({sz[v[i]],v[i]});
            adj[v[i]].erase(v2[i]);
        }
        if(csz==0){
            break;
        }
    }
 
    if(k>0){
        res.clear();
    }
    cout<<res.size();
    return;
}
 
int32_t main(){
    IOS;
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