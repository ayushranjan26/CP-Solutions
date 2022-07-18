#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;
vector<int> adj[200005];
//DSU
vector<int> p(200005);//vector to store the parent

void make_set(int v){//initialize the set
    p[v]=v;
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
    }
}
void solve(){
    int i,j,n,m;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(v<u){
            swap(u,v);
        }
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++){
        make_set(i);
    }
    int res[n+1]={0};
    for(i=n-1;i>0;i--){
        res[i]=res[i+1]+1;
        for(j=0;j<adj[i+1].size();j++){
            //cout<<adj[i+1][j]<<" - ";
            if(find_set(i+1)!=find_set(adj[i+1][j])){
                union_set(i+1,adj[i+1][j]);
                res[i]--;
            }
        }
        /*for(j=1;j<=n;j++){
            cout<<find_set(j)<<" ";
        }
        cout<<endl;
        cout<<res[i]<<" ";
        cout<<endl;*/
    }
    for(i=1;i<=n;i++){
        cout<<res[i]<<"\n";
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
