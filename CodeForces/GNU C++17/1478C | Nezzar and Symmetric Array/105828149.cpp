/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
const ll mod = 1e9+7;
const ll INF = 1e18;
const ll MAX = 1e6+1;
 
bool check_prime(ll n)
{
    ll i;
    if(n<=1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    ll sn=sqrt(n);
    for(i=3;i<=sn;i++){
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
vector<bool> seive(ll n)
{
    ll i,j;
    vector<bool> prime(n+1);
    for(i=0;i<=n;i++)
    {
        prime[i]=true;
    }
    prime[0]=false;
    prime[1]=false;
    ll sn=sqrt(n);
    for(i=2;i<=sn;i++)
    {
        if(prime[i])
        {
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
 
    }
    return prime;
}
ll GCD(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
vector<ll> primeFactors(ll n)
{
    vector<ll> v;
    while (n%2 == 0)
    {
        v.push_back(2);
        n = n/2;
 
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
}
ll factorial[1000001];
void fact()
{
    factorial[0]=1;
    for(int i = 1; i <= 1000000; i++)
        factorial[i] = factorial[i - 1] * i % mod;
}
ll power(ll x, unsigned ll y, unsigned ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, mod) % mod;
    p = (p * p) % mod;
    return (y%2 == 0)? p : (x * p) % mod;
}
ll inverse(ll a)
{
    return power(a, mod-2, mod);
}
long long binomial_coefficient(ll n, ll k)
{
    return factorial[n] * inverse(factorial[k]) % mod * inverse(factorial[n - k]) % mod;
}
void solve()
{
    ll i,j,k,n,m,d,l,r,y,x,z;
    cin>>n;
    n=n*2;
    map<ll,ll> mp;
    for(i=0;i<n;i++){
        cin>>d;
        mp[d]++;
    }
    vector<ll> vec;
    for(auto it:mp){
        if(it.second!=2){
            cout<<"NO";
            return;
        }
        z=it.first;
        vec.push_back(z);
    }
    sort(vec.begin(),vec.end());
    ll sum=0;
    n=n/2;
    for(i=n-1;i>=0;i--){
        z=(vec[i]-sum)/(2*(i+1));
        if((vec[i]-sum)%(2*(i+1))!=0){
            cout<<"NO";
            return;
        }
        sum+=2*z;
        if(z<=0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
 
int main()
{
   // IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
 