#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n];
    int f[2001]={0};
    set<int> si;
    vector<int> adj[2001];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=m){
            f[a[i]]++;
            adj[a[i]].push_back(i);
        }
        else{
            si.insert(i);
        }
    }
    set<pii> sp;
    for(i=1;i<=m;i++){
        sp.insert({f[i],i});
    }
    int chg=0;
    while(sp.begin()->ft<n/m){
        chg++;
        int x,y;
        x=sp.begin()->ft,y=sp.begin()->sd;
        sp.erase(sp.begin());
        if(!si.empty()){
            a[*si.begin()]=y;
            si.erase(si.begin());
        }
        else{
            int u,v;
            u=sp.rbegin()->ft,v=sp.rbegin()->sd;
            a[adj[v].back()]=y;
            adj[v].pop_back();
            sp.erase({u,v});
            sp.insert({u-1,v});
        }
        sp.insert({x+1,y});
    }
 
    cout<<n/m<<" "<<chg<<"\n";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
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