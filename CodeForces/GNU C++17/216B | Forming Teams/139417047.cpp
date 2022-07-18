#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
const int N = 105;
vector<int> p(N);//vector to store the parent
vector<int> sz(N);
void make_set(int v){//initialize the set
    p[v]=v;
    sz[v]=1;
}
 
int find_set(int v){//find the set whom v belongs to
    if(p[v]==v){
        return v;
    }
    p[v]=find_set(p[v]);
    return p[v];
}
 
void union_set(int a,int b){//merging the two set
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        p[b]=a;
        sz[a]+=sz[b];
    }
}
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        make_set(i);
    }
    int res=0;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(find_set(u)!=find_set(v)){
            union_set(u,v);
        }
        else{
            if(sz[find_set(u)]%2==1){
                res++;
            }
        }
    }
    if((n-res)%2==1){
        res++;
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