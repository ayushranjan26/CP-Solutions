/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
 
ll a[105][105];
void solve()
{
    ll i,j,n,m,a,c,ans=0;
    cin>>n;
    vector<pair<ll,ll> > v;
    for(i=0;i<n;i++){
        cin>>a>>c;
        ans+=c;
        v.push_back({a,c});
    }
    sort(v.begin(),v.end());
    ll mx=v[0].ft+v[0].sd;
    for(i=1;i<n;i++){
        ans+=max(0LL,v[i].ft-mx);
        mx=max(mx,v[i].ft+v[i].sd);
    }
    cout<<ans;
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}