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
 
int chkpower2(int x)
{
    return (x&&!(x&x-1));
}
 
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
 
 
 
void solve()
{
    ll i,j,n1,n2,n3;
    cin>>n1>>n2>>n3;
    ll a[n1],b[n2],c[n3];
    ll s1=0,s2=0,s3=0;
    for(i=0;i<n1;i++){
        cin>>a[i];
        s1+=a[i];
    }
    for(i=0;i<n2;i++){
        cin>>b[i];
        s2+=b[i];
    }
    for(i=0;i<n3;i++){
        cin>>c[i];
        s3+=c[i];
    }
    sort(a,a+n1);
    sort(b,b+n2);
    sort(c,c+n3);
    vector<ll> v;
    v.push_back(a[0]);
    v.push_back(b[0]);
    v.push_back(c[0]);
    sort(all(v));
    ll neg=min({s1,s2,s3,v[0]+v[1]});
    cout<<s1+s2+s3-2*neg;
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
 
        solve();
        cout<<"\n";
    }
    return 0;
}