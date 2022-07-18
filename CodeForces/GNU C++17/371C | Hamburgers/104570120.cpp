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
 
ll nb,ns,nc,pb,pc,ps,r,n,req_b,req_s,req_c;
string recipe;
bool fun(ll k){
    ll b,s,c;
    b=k*req_b;
    s=k*req_s;
    c=k*req_c;
    b=max(0LL,b-nb);
    s=max(0LL,s-ns);
    c=max(0LL,c-nc);
    ll price=b*pb+s*ps+c*pc;
    if(price<=r){
        return true;
    }
    else{
        return false;
    }
}
void solve()
{
    ll i;
    cin>>recipe;
    n=recipe.size();
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    for(i=0;i<n;i++){
        if(recipe[i]=='B'){
            req_b++;
        }
        else if(recipe[i]=='S'){
            req_s++;
        }
        else{
            req_c++;
        }
    }
 
    ll low=0,high=1e12+1000;
    while(high>low){
        //cout<<low;
        ll mid=(high+low+1)/2;
        if(fun(mid)){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low;
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