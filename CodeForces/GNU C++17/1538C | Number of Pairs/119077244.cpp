/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    ll i,j,k,n,l,r;
    cin>>n>>l>>r;
    vector<ll> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    for(i=0;i<n;i++){
        ll x,y;
        x=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
        y=upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();
        ans+=y-x;
    }
    cout<<ans;
    return;
}
 
int main()
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}