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


void solve()
{
    ll i,j,n,m,k,n1;
    cin>>n>>k;
    int a[26]={0};
    while(k>0){
        for(i=25;i>=0;i--){
            ll x=pow(2,i);
            if(x<=k){
                k-=x;
                a[i]++;
            }
        }
    }
    int cnt=0;
    for(i=0;i<26;i++){
        cnt+=a[i];
    }
    if(cnt>n){
        cout<<"-1";
        return;
    }
    int rem=n-cnt;

    for(i=25;i>0;i--){
        if(rem&&a[i]!=0){

            if(rem>=a[i]){
                rem-=a[i];
                a[i-1]+=2*a[i];
                a[i]=0;
            }
            else{
                a[i-1]+=2*(rem);
                a[i]-=rem;
                rem=0;
            }

        }
    }
    if(rem!=0){
        cout<<"-1";
        return;
    }
    for(i=0;i<26;i++){
        for(j=0;j<a[i];j++){
            cout<<(char)('a'+i);
        }
    }
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
