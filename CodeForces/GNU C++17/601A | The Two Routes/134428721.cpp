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
    int i,j,n,m;
    cin>>n>>m;
    vector<int> adt[n+1];
    vector<int> adr[n+1];
    set<pii> st;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        if(u>v){
            swap(u,v);
        }
        adt[u].push_back(v);
        adt[v].push_back(u);
        st.insert({u,v});
    }
    int c=0;/// 0 = train / 1=road
    if(st.find({1,n})==st.end()){
        c++;
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(st.find({i,j})==st.end()){
                adr[i].push_back(j);
                adr[j].push_back(i);
            }
        }
    }
    if(st.size()==0||st.size()==(n*(n-1))/2){
        cout<<"-1";
        return;
    }
    if(c==0){
        vector<int> dis(n+1,1e9);
        vector<int> vis(n+1,0);
        queue<int> q;
        dis[1]=0;
        vis[1]=1;
        q.push(1);
        while(!q.empty()){
            int v=q.front();
            q.pop();
            for(i=0;i<adr[v].size();i++){
                if(vis[adr[v][i]]==0){
                    q.push(adr[v][i]);
                    vis[adr[v][i]]=1;
                }
                if(dis[adr[v][i]]>dis[v]+1){
                    dis[adr[v][i]]=dis[v]+1;
                }
            }
        }
        if(dis[n]==1e9){
            cout<<"-1";
            return;
        }
        cout<<dis[n];
    }
    else{
        vector<int> dis(n+1,1e9);
        vector<int> vis(n+1,0);
        queue<int> q;
        dis[1]=0;
        vis[1]=1;
        q.push(1);
        while(!q.empty()){
            int v=q.front();
            q.pop();
            for(i=0;i<adt[v].size();i++){
                if(vis[adt[v][i]]==0){
                    q.push(adt[v][i]);
                    vis[adt[v][i]]=1;
                }
                if(dis[adt[v][i]]>dis[v]+1){
                    dis[adt[v][i]]=dis[v]+1;
                }
            }
        }
        if(dis[n]==1e9){
            cout<<"-1";
            return;
        }
        cout<<dis[n];
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