/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 998244353;
 
int chkpower2(int x)
{
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
ll power(ll a,ll b)
{
    ll i=0;
    ll c=1;
    for(i=0; i<b; i++)
    {
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
void solve()
{
    int n,i,j,k;
    cin>>n;
    vector<int> v;
    for(i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    for(i=1;i<=n;i++){
        bool f=1;
        for(j=0;j<i;j++){
            vector<int> p;
            for(k=j;k<n;k=k+i){
                p.push_back(v[k]);
            }
            for(k=0;k<p.size();k++){
                //cout<<p[k]<<" ";
                if(k>p[k]){
                    f=0;
                }
            }
            //cout<<endl;
        }
        //cout<<endl;
        if(f){
            cout<<i;
            return;
        }
    }
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//ncin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}