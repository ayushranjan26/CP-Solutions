/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const int mod = 1000000007;
 
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
 
void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    ll dp[10000][4];
    dp[1][0]=0;
    dp[1][1]=1;
    dp[1][2]=1;
    dp[1][3]=1;
    for(int i1=2;i1<=n;i1++){
 
        dp[i1%10000][0]=(dp[(i1-1+10000)%10000][1]%mod+dp[(i1-1+10000)%10000][2]%mod+dp[(i1-1+10000)%10000][3]%mod)%mod;
        dp[i1%10000][1]=(dp[(i1-1+10000)%10000][0]%mod+dp[(i1-1+10000)%10000][2]%mod+dp[(i1-1+10000)%10000][3]%mod)%mod;
        dp[i1%10000][2]=(dp[(i1-1+10000)%10000][0]%mod+dp[(i1-1+10000)%10000][1]%mod+dp[(i1-1+10000)%10000][3]%mod)%mod;
        dp[i1%10000][3]=(dp[(i1-1+10000)%10000][0]%mod+dp[(i1-1+10000)%10000][1]%mod+dp[(i1-1+10000)%10000][2]%mod)%mod;
    }
    cout<<dp[n%10000][0];
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}