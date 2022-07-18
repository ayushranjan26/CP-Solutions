#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
 
void solve()
{
    ll i,j,k,l,n,d1;
    cin>>n;
    ll a[n],b[n],sm=0;
    vector<pair<ll,ll>> vp;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        sm+=a[i];
        vp.push_back({b[i],a[i]});
    }
    sort(vp.begin(),vp.end());
    ll cnt=0,cost=0;
    i=0;
    while(cnt<sm&&i<n){
        if(cnt<vp[i].ft){
            cost+=2*min(sm-cnt,vp[i].ft-cnt);
            cnt+=min(sm-cnt,vp[i].ft-cnt);
        }
        //cout<<cnt<<"-"<<cost<<endl;
        if(cnt>=vp[i].ft){
            cost+=min(vp[i].sd,sm-cnt);
            cnt+=min(vp[i].sd,sm-cnt);
        }
        i++;
        //cout<<cnt<<"-"<<cost<<endl;
    }
    cout<<cost;
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}