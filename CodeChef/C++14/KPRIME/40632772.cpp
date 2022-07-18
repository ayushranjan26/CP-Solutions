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


ll dp[100005][6];
int chk[100005];
void cal(){
    int i,j;
    for(i=2;i<100005;i++){
        if(chk[i]==0){
            for(j=i;j<100005;j+=i){
                chk[j]++;
            }
        }
    }
    for(i=2;i<100005;i++){
        for(j=0;j<6;j++){
            if(chk[i]==j){
                dp[i][j]=dp[i-1][j]+1;
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
}
void solve()
{
    ll i,x,j,n,m,a,k,b;
    cin>>a>>b>>k;
    cout<<dp[b][k]-dp[a-1][k];
    return;
}
int main()
{
    //IOS;
    int t;
    cin>>t;
    cal();
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
