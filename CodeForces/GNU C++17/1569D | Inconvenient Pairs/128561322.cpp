#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=998244353;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m>>k;
    int x[n],y[m];
    vector<pii> px,py;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<m;i++){
        cin>>y[i];
    }
    for(i=0;i<k;i++){
        int u,v;
        cin>>u>>v;
        px.push_back({u,v});
        py.push_back({v,u});
    }
    sort(px.begin(),px.end());
    sort(py.begin(),py.end());
    int res=0,l=0;
    for(i=0;i<n-1;i++){
        int cnt=0;
        map<int,int> mp;
        while(l<k&&px[l].ft<x[i+1]){
            if(px[l].ft>x[i]){
                cnt++;
                mp[px[l].sd]++;
            }
            l++;
        }
        res+=((cnt-1)*cnt)/2;
        for(auto it : mp){
            //cout<<it.ft<<"=="<<it.sd<<endl;
            res-=((it.sd-1)*it.sd)/2;
        }
        //cout<<x[i+1]<<"- -"<<res<<endl;
    }
    l=0;
    for(i=0;i<m-1;i++){
        int cnt=0;
        map<int,int> mp;
        while(l<k&&py[l].ft<y[i+1]){
            if(py[l].ft>y[i]){
                cnt++;
                mp[py[l].sd]++;
            }
            l++;
        }
        res+=((cnt-1)*cnt)/2;
        for(auto it : mp){
            //cout<<it.ft<<"=="<<it.sd<<endl;
            res-=((it.sd-1)*it.sd)/2;
        }
        //cout<<x[i+1]<<"- -"<<res<<endl;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}