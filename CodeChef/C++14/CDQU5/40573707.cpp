/*WELCOME TO AYUSH RANJAN CODE'S*/

#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
using namespace std;

const ll mod = 1e9+9;

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
ll power(ll a,ll b){
    ll i=0;
    ll c=1;
    for(i=0; i<b; i++)
    {
        c=c*a;
        c=c%mod;
    }
    return c;
}


ll a[1000001];
void fun(ll n){

    a[0]=0,a[1]=0,a[2]=1,a[3]=1;
    for(ll i=4;i<=n;i++){
        a[i]=(a[i-2]+a[i-3])%mod;
        //a[i]%=1e9+9;
    }
    return;

}
void solve()
{
    ll i,x,j,n,m,k;


    cin>>n;
    cout<<a[n];
    return;
}
int main()
{
    IOS;
    int t;
    cin>>t;
    fun((ll)1000001);
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<a[n];
        //solve();
        cout<<"\n";
    }
    return 0;
}
