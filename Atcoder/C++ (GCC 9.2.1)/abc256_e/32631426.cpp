#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n],c[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    for(i=0;i<n;i++){
        cin>>c[i];
    }

    vector<int> adj[n];
    int ideg[n]={0};
    for(i=0;i<n;i++){
        adj[i].push_back(a[i]);
        ideg[a[i]]++;
    }
    queue<int> q;
    for(i=0;i<n;i++){
        if(ideg[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int d=q.front();
        q.pop();
        for(i=0;i<adj[d].size();i++){
            ideg[adj[d][i]]--;
            if(ideg[adj[d][i]]==0){
                q.push(adj[d][i]);
            }
        }
        adj[d].clear();
    }
    int vis[n]={0},res=0;
    for(i=0;i<n;i++){
        if(vis[i]==0&&adj[i].size()>0){
            vis[i]=1;
            int mn=c[i];
            int d=i;
            while(adj[d][0]!=i){
                mn=min(c[adj[d][0]],mn);
                d=adj[d][0];
               // cout<<d+1<<" -> ";
                vis[d]=1;
            }
            //cout<<endl;
            res+=mn;
        }
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
