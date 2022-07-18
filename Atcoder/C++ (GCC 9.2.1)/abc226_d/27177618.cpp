 #include <bits/stdc++.h>

#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;
ll tim=0;
int t[200005];
vector<int> k[200005];
int vis[200005];
void dfs(int idx){
    if(vis[idx]==0){
        vis[idx]=1;
        tim+=t[idx];
        for(int i=0;i<k[idx].size();i++){
            dfs(k[idx][i]);
        }
    }
    return;
}

void solve(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        int sz;
        cin>>t[i]>>sz;
        for(j=1;j<=sz;j++){
            int d;
            cin>>d;
            k[i].push_back(d);
        }
    }
    dfs(n);
    cout<<tim;
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
