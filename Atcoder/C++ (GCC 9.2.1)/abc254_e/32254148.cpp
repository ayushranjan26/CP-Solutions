#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

vector<int> adj[200005];
int n,res;
unordered_set<int> st;
void calc(int idx,int k,int prev){
    if(k>=0){
        if(st.find(idx)==st.end()){
            res+=idx;
        }
        st.insert(idx);
        for(int i=0;i<adj[idx].size();i++){
            if(adj[idx][i]!=prev){
                calc(adj[idx][i],k-1,idx);
            }
        }
    }

}

void solve(){
    int i,j,m,q;
    cin>>n>>m;
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>q;
    while(q--){
        int v,k;
        cin>>v>>k;
        res=0;
        st.clear();
        calc(v,k,-1);

        cout<<res<<"\n";
    }
    return;
}

int32_t main(){
    IOS;
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
