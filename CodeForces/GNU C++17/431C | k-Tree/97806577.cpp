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
    int  n,k,d;
    cin>>n>>k>>d;
 
    ll dp1[n+1]={0},dp2[n+1]={0};
    dp1[0]=1;
    dp2[0]=1;
    for(int i1=1;i1<=n;i1++){
        for(int i2=1;i2<=min(i1,k);i2++){
            dp1[i1]+=dp1[i1-i2]%mod;
        }
    }
    for(int i1=1;i1<=n;i1++){
        for(int i2=1;i2<=min(i1,d-1);i2++){
            dp2[i1]+=dp2[i1-i2]%mod;
        }
    }
 
    ll ans=((mod+dp1[n]-dp2[n])%mod+mod)%mod;
    cout<<ans;
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