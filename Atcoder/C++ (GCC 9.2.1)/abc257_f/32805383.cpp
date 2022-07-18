#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    vector<int> adj[n];
    set<int> st;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        if(u==-1){
            st.insert(v);
            continue;
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int dis0[n],vis[n];
    for(i=0;i<n;i++){
        dis0[i]=mod;
        vis[i]=0;
    }
    queue<int> q;
    q.push(0);
    dis0[0]=0;
    vis[0]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(i=0;i<adj[v].size();i++){
            int u=adj[v][i];
            dis0[u]=min(dis0[u],dis0[v]+1);
            if(vis[u]==0){
                vis[u]=1;
                q.push(u);
            }
        }
    }

    int disn[n];
    for(i=0;i<n;i++){
        disn[i]=mod;
        vis[i]=0;
    }
    q.push(n-1);
    disn[n-1]=0;
    vis[n-1]=1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(i=0;i<adj[v].size();i++){
            int u=adj[v][i];
            disn[u]=min(disn[u],disn[v]+1);
            if(vis[u]==0){
                vis[u]=1;
                q.push(u);
            }
        }
    }
    set<pii> st0,stn;
    for(i=0;i<n;i++){
        if(st.find(i)!=st.end()){
            st0.insert({dis0[i],i});
            stn.insert({disn[i],i});
        }
    }

    int res[n];
    for(i=0;i<n;i++){
        res[i]=dis0[n-1];
        if(st0.empty()){
            continue;
        }
        res[i]=min({res[i], dis0[i]+ stn.begin()->ft+1, disn[i]+st0.begin()->ft+1});
        //cout<<res[i]<<endl;
        //continue;
        int d=st0.begin()->ft;
        auto it=stn.begin();
        if(st0.begin()->sd!=stn.begin()->sd){
            res[i]=min(res[i],st0.begin()->ft+stn.begin()->ft+2);
        }
        else{
            it++;
            res[i]=min(res[i],st0.begin()->ft+it->ft+2);
        }
        d=stn.begin()->ft;
        it=st0.begin();
        if(st0.begin()->sd!=stn.begin()->sd){
            if(it!=stn.end()){
                res[i]=min(res[i],st0.begin()->ft+stn.begin()->ft+2);
            }
        }
        else{
            it++;
            if(it!=st0.end()){
                res[i]=min(res[i],stn.begin()->ft+it->ft+2);
            }
        }
    }
    for(i=0;i<n;i++){
        if(res[i]>=n){
            res[i]=-1;
        }
    }
    for(i=0;i<n;i++){
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
