 #include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
vector<int> adj[100005];
int s[100005];
bool flg;
int sm=0;
 
void dfs(int idx,int prev,int lvl,int smp){
    if(lvl%2==1){
        if(smp>s[idx]){
            flg=false;
        }
        sm+=(s[idx]-smp);
        smp=s[idx];
    }
    int mn=1e10;
    for(int i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            dfs(adj[idx][i],idx,lvl+1,smp);
            if(lvl%2==0){
                mn=min(mn,s[adj[idx][i]]);
            }
        }
    }
    if(lvl%2==0&&adj[idx].size()>1){
        //]cout<<idx<<" ";
        sm=sm-(adj[idx].size()-2)*(mn-smp);
    }
}
 
void solve(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n-1;i++){
        int par;
        cin>>par;
        adj[i+2].push_back(par);
        adj[par].push_back(i+2);
    }
    for(i=1;i<=n;i++){
        cin>>s[i];
    }
    flg=true;
    dfs(1,-1,1,0);
    if(!flg){
        cout<<"-1";
    }
    else{
        cout<<sm;
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