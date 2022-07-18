#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

vector<vector<int>> v;
int res=0;

void dfs(int idx,vector<int>& vis,int xr){
    if(idx==v.size()){
        res=max(res,xr);
        return;
    }
    else{
        if(vis[idx]==0){
            for(int i=0;i<v[idx].size();i++){
                if(vis[idx+i+1]==0){
                    xr^=v[idx][i];
                    vis[idx+i+1]=1;
                    dfs(idx+1,vis,xr);
                    xr^=v[idx][i];
                    vis[idx+i+1]=0;
                }
            }
        }
        else{
            dfs(idx+1,vis,xr);
        }
    }
}

void solve(){
    int i,j,n;
    cin>>n;
    for(i=1;i<2*n;i++){
         vector<int> d;
         for(j=0;j<2*n-i;j++){
            int z;
            cin>>z;
            d.push_back(z);
         }
         v.push_back(d);
    }
    vector<int> vis(2*n,0);
    dfs(0,vis,0);
    cout<<res;
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
