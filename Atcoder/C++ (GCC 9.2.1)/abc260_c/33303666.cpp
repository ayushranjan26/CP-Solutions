#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;


void solve(){
    int i,j,n,x,y,z;
    cin>>n>>x>>y>>z;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    int vis[n]={0};
    vector<pair<int,int>> mt,en,ov;
    for(i=0;i<n;i++){
        mt.push_back({a[i],-i});
        en.push_back({b[i],-i});
        ov.push_back({a[i]+b[i],-i});
    }
    sort(mt.rbegin(),mt.rend());
    sort(en.rbegin(),en.rend());
    sort(ov.rbegin(),ov.rend());

    for(i=0;i<n;i++){
        if(x>0&&vis[abs(mt[i].sd)]==0){
            vis[abs(mt[i].sd)]=1;
            x--;
        }
    }
    for(i=0;i<n;i++){
        if(y>0&&vis[abs(en[i].sd)]==0){
            vis[abs(en[i].sd)]=1;
            y--;
        }
    }
    for(i=0;i<n;i++){
        if(z>0&&vis[abs(ov[i].sd)]==0){
            vis[abs(ov[i].sd)]=1;
            z--;
        }
    }
    for(i=0;i<n;i++){
        if(vis[i]==1){
            cout<<i+1<<endl;
        }
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
