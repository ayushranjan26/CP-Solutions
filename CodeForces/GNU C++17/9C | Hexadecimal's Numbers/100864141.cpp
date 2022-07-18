/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
 
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
const ll mod = 998244353;
 
int chkpower2(int x)
{
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
ll power(ll a,ll b)
{
    ll i=0;
    ll c=1;
    for(i=0; i<b; i++)
    {
        c=c*a;
        c=c%mod;
    }
    return c;
}
 
int ans=0;
vector<int> num;
void rec(vector<int> v){
    int i;
    if(v.size()>num.size()){
        //cout<<v.size()<<"d";
        return;
    }
    if(v.size()<num.size()){
        ans++;
        v.push_back(0);
        rec(v);
        v.pop_back();
        v.push_back(1);
        rec(v);
        return;
    }
    for(i=0;i<v.size();i++){
        if(num[i]>v[i]){
            break;
        }
        if(num[i]<v[i]){
            return;
        }
    }
    ans++;
    v.push_back(0);
    rec(v);
    v.pop_back();
    v.push_back(1);
    rec(v);
    return;
}
void solve()
{
    int n,i,j,k;
    cin>>n;
    string s=to_string(n);
    for(i=0;i<s.size();i++){
        int x=(int)(s[i]-'0');
        num.push_back(x);
    }
    vector<int> v;
    v.push_back(1);
    rec(v);
    cout<<ans;
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