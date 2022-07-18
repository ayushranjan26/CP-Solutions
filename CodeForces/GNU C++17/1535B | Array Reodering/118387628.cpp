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
ll gcd(ll a,ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void solve()
{
    ll i,j,k,n,m,x;
    cin>>n;
    ll a[n];
    vector<ll> v;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            v.push_back(a[i]);
        }
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            v.push_back(a[i]);
        }
    }
    ll ans=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(gcd(v[i],2*v[j])>1){
                ans++;
            }
        }
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