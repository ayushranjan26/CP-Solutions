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
 
 
void solve(){
    int i,j,n;
    string s;
    j=0;
    cin>>n>>s;
    if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
        cout<<"YES";
    }
   else if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
        cout<<"YES";
    }
    else if(s[0]=='2'&&s[n-1]=='0'){
        if(s[1]=='0'&&s[2]=='2'){
            cout<<"YES";
        }
        else if(s[n-3]=='0'&&s[n-2]=='2'){
            cout<<"YES";
        }
        else if(s[1]=='0'&&s[n-2]=='2'){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
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