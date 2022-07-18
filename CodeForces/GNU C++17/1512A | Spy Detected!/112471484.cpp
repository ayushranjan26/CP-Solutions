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
 
ll GCD(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
 
void solve()
{
    ll i,j,k,n,w,d;
    cin>>n;
    ll a[n];
    ll ans=0;
    map<ll,ll> m;
    for(i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(m[a[i]]==1){
            cout<<i+1;
            return;
        }
    }
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