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
}}
 
ll smallestprime[1000001];
void find_smallestprime(){
    smallestprime[1]=1;
    smallestprime[0]=1;
    ll i,j;
    for(i=2;i<1000001;i++){
        if(smallestprime[i]==0){
            for(j=i;j<1000001;j+=i){
                smallestprime[j]=i;
            }
        }
    }
}
void solve()
{
    ll i,j,n,q,d;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> m;
    ll ans1=0,ans2=0;
    for(i=0;i<n;i++){
        cin>>v[i];
        ll tmp=v[i];
        ll element=1;
        while(tmp>1){
            ll s=smallestprime[tmp];
            ll cnt=0;
            while(tmp>1&&tmp%s==0){
                cnt++;
                tmp/=s;
            }
            if(cnt%2){
                element*=s;
            }
        }
        m[element]++;
        ans1=max(ans1,m[element]);
    }
    for(auto i:m){
        if(i.second%2==0&&i.first!=1){
            m[1]+=i.second;
        }
        else{
            ans2=max(ans2,i.second);
        }
    }
    ans2=max(ans2,m[1]);
    cin>>q;
    for(i=0;i<q;i++){
        cin>>d;
        if(d==0){
            cout<<ans1<<"\n";
        }
        else{
            cout<<ans2<<"\n";
        }
    }
    return;
 
}
int main()
{
    IOS;
    int t;
    find_smallestprime();
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}