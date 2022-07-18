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
 
char a[502][502];
int n,m,k;
int cnt_k=0;
void dfs(int i,int j,int vis[502][502]){
    if(i<0||i>=n||j<0||j>=m||vis[i][j]==1||a[i][j]!='.'){
        return;
    }
    vis[i][j]=1;
    dfs(i-1,j,vis);
    dfs(i+1,j,vis);
    dfs(i,j-1,vis);
    dfs(i,j+1,vis);
    if(cnt_k<k){
        cnt_k++;
        a[i][j]='X';
    }
    return;
}
void solve()
{
    ll i,j;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int vis[502][502];
    for(i=0;i<502;i++){
        for(j=0;j<502;j++){
            vis[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='.'){
                dfs(i,j,vis);
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
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