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
ll cnt[MAX];
void reset(vector<ll> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cnt[a[i]] = 0;
    }
}
void solve()
{
    ll i,j,n,k,m,d,l,r;
    vector<ll> v;
    cin>>n;
    vector<ll> a(2*n);
    for(i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll f=0;
    for(i=0;i<2*n-1;i++){
        for (int j = 0; j < 2 * n; j++)
            cnt[a[j]]++;
        ll j=2*n-1;
        ll x=a[i]+a[j];
        vector<ll> r;
        for(k=0;k<n;k++){
            while (j > 0 && cnt[a[j]] == 0)
                j--;
            r.push_back(a[j]);
            r.push_back(x - a[j]);
            cnt[a[j]]--, cnt[x - a[j]]--;
            if (cnt[a[j]] < 0 || cnt[x - a[j]] < 0)
            {
                cnt[a[j]] = 0;
                cnt[x - a[j]] = 0;
                break;
            }
            x = max(x - a[j], a[j]);
            if (k + 1 == n)
                f = 1;
        }
        reset(a);
        if (f)
        {
            cout << "YES\n";
            cout << r[0] + r[1] << "\n";
            for (int i = 0; i < r.size(); i++)
            {
                cout << r[i] << " \n"[i % 2];
            }
            return;
        }
    }
    cout<<"NO";
    reset(a);
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