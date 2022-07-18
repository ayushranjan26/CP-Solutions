/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const ll mod = 1000000007;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    v.push_back(n);
    return v;
}
 
void solve(){
    ll n,i,j,m;
    cin>>n;
    vector<ll> v,v1;
    ll a;
    for(i=0;i<n;i++){
        ll d;
        cin>>d;
        v.push_back(d);
    }
 
    ll ans=0;
    for(i=1;i<v.size();i++){
        ll d=abs(v[i]-v[i-1]);
        ans+=d;
    }
    ll z=max(abs(v[0]-v[1]),abs(v[n-1]-v[n-2]));
    ll ans2=ans;
    ll x=0;
    for(i=1;i<v.size()-1;i++){
        ll d=abs(v[i]-v[i-1])+abs(v[i+1]-v[i])-abs(v[i+1]-v[i-1]);
        x=max(x,d);
    }
    cout<<min(ans2-x,ans2-z);
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}