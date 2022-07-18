/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 1000000007;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
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
ll power(int a,int b){
    ll i=0;
    ll c=1;
    for(i=0;i<b;i++){
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
void solve(){
    ll n,m,i,j;
    cin>>n>>m;
    char name[n][m];
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        for(j=0;j<m;j++){
            name[i][j]=s[j];
        }
    }
    ll ans=1;
    for(int j=0;j<m;j++){
        set<char> s;
        for(i=0;i<n;i++){
            s.insert(name[i][j]);
        }
        ans=ans*s.size();
        ans=ans%mod;
 
    }
    cout<<ans;
    return;
}
int main()
{
    IOS;
    int t;
    t=1;//ncin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}