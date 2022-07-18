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
 
 
void solve()
{
    ll i,j,k,n,m,x,y;
    cin>>n;
    ll r[n],c[n];
    for(i=0;i<n;i++){
        cin>>r[i];
    }
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++){
        v.push_back({r[i],c[i]});
    }
    sort(v.begin(),v.end());
    ll ans=0;
    x=1,y=1;
    for(i=0;i<n;i++){
        if(v[i].ft==x&&v[i].sd==y){
            continue;
        }
        else if(v[i].ft-v[i].sd==x-y&&(x-y)%2==0){
            ans+=v[i].ft-x;
            x=v[i].ft;
            y=v[i].sd;
        }
 
        else{
            ll x1,y1;
            x1=v[i].ft;
            y1=v[i].sd;
            x1-=(y1-y);
            ans+=(x1-x)/2;
            if((x-y)%2==1&&(x1-y)%2==0&&(x1-x)%2){
                ans++;
            }
            x=v[i].ft;
            y=v[i].sd;
        }
        //cout<<v[i].ft<<" "<<v[i].sd<<" "<<ans<<"\n";
    }
    cout<<ans;
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}