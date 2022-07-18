#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7,INF=1e18;

int n,m;
vector<int> v[200005];

void bfs(ll s,ll t){
    vector<ll> vis(n);
    vector<ll> dis(n);
    vector<ll> ways(n,1);
    for(int i=0;i<n;i++){
        dis[i]=INF;
    }
    vector<ll> p(n);
    queue<ll> q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    p[0]=-1;
    while(!q.empty()){
        ll f=q.front();
        //cout<<f<<" ";
        q.pop();
        for(int i=0;i<v[f].size();i++){
            if(vis[v[f][i]]!=1){
                vis[v[f][i]]=1;
                q.push(v[f][i]);
            }
            if(dis[f]+1<dis[v[f][i]]){
                    //cout<<f<<" * "<<v[f][i]<<"- \n";
                    dis[v[f][i]]=dis[f]+1;
                    p[v[f][i]]=f;
                    ways[v[f][i]]=ways[f] ;
                }
                else if(dis[f]+1==dis[v[f][i]]){
                    //cout<<f<<"  "<<v[f][i]<<"- \n";
                    dis[v[f][i]]=dis[f]+1;
                    p[v[f][i]]=f;
                    ways[v[f][i]]+=ways[f];
                    ways[v[f][i]]%=mod;
                }
        }
    }
    if(vis[t]==0){
        cout<<"0";
    }
    else{
        cout<<ways[n-1];
    }
    return;
}

void solve(){
    int i,j,k;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--,y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(0,n-1);
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
