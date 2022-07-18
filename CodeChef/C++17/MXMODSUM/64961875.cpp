#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    int a[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]%m]=max(mp[a[i]%m],a[i]);
    }
    vector<pii> vp;/// {remainder ,a[i]}
    for(auto it:mp){
        vp.push_back({it.sd%m,it.sd});
    }
    sort(vp.begin(),vp.end());
    int res=0;
    n=vp.size();
    for(i=0;i<n;i++){
        res=max(res,vp[i].sd+vp[i].sd);
    }
    int mx=vp[n-1].ft+vp[n-1].sd;
    for(i=n-2;i>=0;i--){
        res=max(res,mx-vp[i].ft+vp[i].sd);
        mx=max(mx,vp[i].ft+vp[i].sd);
    }
    mx=vp[n-1].sd-vp[n-1].ft;
    for(i=n-2;i>=0;i--){
        res=max(res,mx+vp[i].sd+vp[i].ft+m);
        mx=max(mx,vp[i].sd-vp[i].ft);
    }
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
