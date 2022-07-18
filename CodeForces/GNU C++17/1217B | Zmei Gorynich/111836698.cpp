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
    ll i,j,x,y,z,n,m,k;
    cin>>n>>x;
    ll d[n],h[n];
    for(i=0;i<n;i++){
        cin>>d[i]>>h[i];
    }
    vector<ll> dh;
    for(i=0;i<n;i++){
        dh.push_back(d[i]-h[i]);
    }
    sort(dh.begin(),dh.end());
    sort(d,d+n);
    if(dh[n-1]<=0&&d[n-1]<x){
        cout<<"-1";
        return;
    }
    x-=d[n-1];
    ll ans=1;
    if(x>0){
        ans+=x/dh[n-1];
        if(x%dh[n-1]){
            ans++;
        }
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