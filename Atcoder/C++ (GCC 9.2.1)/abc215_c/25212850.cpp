#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+6;

vector<int> p(N);
vector<int> sz(N);

void make_set(int v){
    p[v]=v;
    sz[v]=1;
}

int find_set(int v){
    if(p[v]==v){
        return v;
    }
    p[v]=find_set(p[v]);
    return p[v];
}

void union_set(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        p[b]=a;
        sz[a]+=sz[b];
    }
}

void solve(){
    int i,j,k,n,q;
    cin>>n;
    vector<pair<int,pair<int,int>>> e;
    for(i=1;i<=n;i++){
        make_set(i);
    }
    for(i=0;i<n-1;i++){
        int u,v,w;
        cin>>u>>v>>w;
        e.push_back({w,{u,v}});
    }
    sort(e.begin(),e.end());
    int res=0;

    for(i=0;i<n-1;i++){
        int u,v,w;
        w=e[i].ft;
        u=e[i].sd.ft;
        v=e[i].sd.sd;
        int a=find_set(u);
        int b=find_set(v);
        res+=w*sz[a]*sz[b];
        union_set(a,b);
        //cout<<res<<" ";
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
