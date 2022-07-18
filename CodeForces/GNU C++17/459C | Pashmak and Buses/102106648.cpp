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
 
ll n,d,k;
vector<vector<ll> > ans;
 
void dfs(ll x,vector<ll> v){
    if(ans.size()==n){
        return;
    }
    v.push_back(x);
    if(v.size()==d){
        ans.push_back(v);
        return;
    }
    for(ll i=0;i<k;i++){
        dfs(i,v);
    }
    return;
}
void solve()
{
    ll i,x,j,m,a,b,p;
    cin>>n>>k>>d;
    ll kd=1;
    bool flag=0;
    for(i=0;i<d;i++){
        kd=kd*k;
        if(kd>=n){
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"-1";
 
    else{
        if(k>=n){
            for(i=0;i<d;i++){
                for(j=0;j<n;j++){
                    cout<<j+1<<" ";
                }
                cout<<endl;
            }
            return;
        }
 
        vector<ll> v;
        for(i=0;i<k;i++){
            vector<ll> c=v;
            dfs(i,c);
        }
        for(i=0;i<ans[0].size();i++){
            for(j=0;j<ans.size();j++){
                cout<<ans[j][i]+1<<" ";
            }
            cout<<endl;
        }
    }
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}