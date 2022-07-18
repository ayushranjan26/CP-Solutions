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
ll M =1000000007;
 
ll fpow(ll x, ll n){
    ll res = 1;
    x %= M;
    while(n)
    {
        if(n&1)res = res * x % M;
        x = x * x % M;
        n>>=1;
    }
    return res;
}
void solve()
{
    ll i,j,k,n,m,d;
    cin>>n>>k;
    cout<<fpow(n,k);
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
       cout<<"\n";
    }
    return 0;
}