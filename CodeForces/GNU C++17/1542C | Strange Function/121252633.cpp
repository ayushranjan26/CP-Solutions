#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
        return gcd(b%a,a);
    }
}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);
}
void solve()
{
    ll i,j,k,n,a,b;
    cin>>n;
    ll ans=0;
    ll curr=1;
    for(i=2;i<=41;i++){
        ll temp=lcm(curr,i);
        ans=((ans+(n/curr-n/temp)*i)%mod)%mod;
        curr=temp;
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 