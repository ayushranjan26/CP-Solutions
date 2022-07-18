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
    ll i,j,k,n;
    cin>>n;
    ll a[n];
    map<ll,ll> m;
    for(i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    ll f=0;
    for(auto it:m){
        f=max(f,it.second);
    }
    ll ans=max(0LL,f-(n-f));
    if(ans==0&&n%2==1){
        ans++;
    }
    cout<<ans;
 
    return ;
}
 
int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}