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
    ll i,j,n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll pre[n+1][2];
    pre[0][0]=0;
    pre[0][1]=0;
    ll pre_sum[n+1]={0};
    for(i=1;i<n+1;i++){
        pre_sum[i]=pre_sum[i-1];
        if(s[i-1]=='+'){
            pre_sum[i]++;
        }
        else{
            pre_sum[i]--;
        }
    }
    for(i=1;i<=n;i++){
        pre[i][0]=max(pre[i-1][0],pre_sum[i]);
        pre[i][1]=min(pre[i-1][1],pre_sum[i]);
    }
    ll suf[n+1][2];
    suf[n][0]=pre_sum[n];
    suf[n][1]=pre_sum[n];
    for(i=n;i>0;i--){
        suf[i-1][0]=max(suf[i][0],pre_sum[i]);
        suf[i-1][1]=min(suf[i][1],pre_sum[i]);
    }
    ll l,r;
    for(i=0;i<m;i++){
        cin>>l>>r;
        ll max_e=max(pre[l-1][0],suf[r][0]-pre_sum[r]+pre_sum[l-1]);
        ll min_e=min(pre[l-1][1],suf[r][1]-pre_sum[r]+pre_sum[l-1]);
        //cout<<suf[r][0]<<" "<<pre_sum[r]<<" "<<pre_sum[l-1]<<endl;
        cout<<max_e-min_e+1<<endl;
    }
    return;
 
}
 
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}