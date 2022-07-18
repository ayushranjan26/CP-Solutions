#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n,x[202],y[202],p[202],vis[202];

void dfs(int idx,int s){
    vis[idx]=1;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            if(s*p[idx]>=abs(x[idx]-x[i])+abs(y[idx]-y[i])){
                dfs(i,s);
            }
        }
    }
}

void solve(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i]>>p[i];
    }
    int lo=0,hi=1e10,res=1e10;
    while(lo<=hi){
        int m=(lo+hi)/2;
        bool f=false;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                vis[j]=0;
            }
            dfs(i,m);
            f=true;
            for(j=0;j<n;j++){
                if(vis[j]==0){
                    f=false;
                }
            }
            if(f){
                break;
            }
        }
        if(f){
            hi=m-1;
            res=min(res,m);
        }
        else{
            lo=m+1;
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
