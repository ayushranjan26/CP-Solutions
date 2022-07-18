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
    cin>>n;
    map<int,int> mp;
    map<pii,int> fr;
    vector<pair<int,int> > vp[n];
    for(i=0;i<n;i++){
        cin>>m;
        for(j=0;j<m;j++){
            int p,c;
            cin>>p>>c;
            fr[{p,c}]++;
            mp[p]=max(c,mp[p]);
            vp[i].push_back({p,c});
        }
    }
    int res=0;
    bool sw=false;
    for(i=0;i<n;i++){
        bool f=false;
        for(j=0;j<vp[i].size();j++){
            if(mp[vp[i][j].ft]==vp[i][j].sd&&fr[{vp[i][j].ft,vp[i][j].sd}]==1){
                f=true;
            }
        }
        if(f){
            res++;
        }
        else{
            sw=true;
        }
    }
    if(sw){
        res++;
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
