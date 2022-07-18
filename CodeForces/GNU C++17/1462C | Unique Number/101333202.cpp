/*WELCOME TO AYUSH RANJAN CODE'S*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
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
 
int x;
bool fun(int n){
    int sum=0;
    string s=to_string(n);
    int a[10]={0};
    for(int i=0;i<s.size();i++){
        int z=(int)((int)s[i]-(int)'0');
        if(a[z]==1||sum>x){
            return false;
        }
 
        sum+=z;
        a[z]=1;
    }
 
    if(sum==x){
        return true;
    }
    else{
        return false;
    }
}
//int x;
 
void solve(){
    int i,x,j,n;
    cin>>x;
    if(x>45){
        cout<<"-1";
        return;
    }
    else{
        vector<int> v;
        int a[10]={0};
        int sum=0;
        for(int i=9;i>0;i--){
            if(a[i]==0&&sum+i<=x){
                sum+=i;
            v.push_back(i);
            }
            if(sum==x){
                break;
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            cout<<v[i];
        }
    }
    return;
}
int main(){
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