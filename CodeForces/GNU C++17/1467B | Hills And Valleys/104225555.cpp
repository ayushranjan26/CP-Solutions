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
 
int fun(ll a[],ll i){
    if((a[i]<a[i-1]&&a[i]<a[i+1])||(a[i]>a[i-1]&&a[i]>a[i+1]))
    {
        return 1;
    }
    else{
        return 0;
    }
}
 
void solve()
{
    ll i,j,n;
    cin>>n;
    ll a[n+2]={0};
    ll f[n+2]={0};
    for(i=1;i<n+1;i++){
        cin>>a[i];
    }
    a[0]=a[1];
    a[n+1]=a[n];
    ll ans=0;
    ll i_val,f_val,tmp;
    for(i=2;i<n;i++){
        if((a[i]>a[i+1]&&a[i]>a[i-1])||(a[i]<a[i+1]&&a[i]<a[i-1])){
            f[i]=1;
            ans++;
        }
    }
    ll max_d=0;
    for(i=2;i<n;i++){
        i_val=f[i-1]+f[i]+f[i+1];
        tmp=a[i];
        a[i]=a[i-1];
        f_val=fun(a,i-1)+fun(a,i)+fun(a,i+1);
        max_d=max(max_d,i_val-f_val);
        a[i]=a[i+1];
        f_val=fun(a,i-1)+fun(a,i)+fun(a,i+1);
        max_d=max(max_d,i_val-f_val);
        a[i]=tmp;
    }
    cout<<ans-max_d;
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
 
        solve();
        cout<<"\n";
    }
    return 0;
}