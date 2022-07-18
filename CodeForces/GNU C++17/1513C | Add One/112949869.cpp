/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define loop(i,a,b) for(int i=(a);i<(b);i++)
#define rloop(i,a,b) for(int i=(a);i>(b);i--)
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll mod =1000000007;
ll test=0;
ll c[200050];
void solve()
{
    test++;
    ll i,j,k,n,m,sm;
    cin>>n>>m;
    string s=to_string(n);
    ll f[10]={0};
    for(i=0;i<s.size();i++){
        f[(int)(s[i]-'0')]++;
    }
 
    ll ans=0;
    for(i=0;i<10;i++){
        if(m+i-1>=0){
            sm=c[m+i-1];
            sm%=mod;
            f[i]%=mod;
            ans+=sm*f[i];
        }
        ans%=mod;
    }
    cout<<ans;
    return ;
}
int main()
 
{
    IOS;
    c[0]=1;
    c[9]=1;
    for(ll j=1;j<=200010;j++){
        c[j+9]+=c[j];
        c[j+10]+=c[j];
        c[j+9]%=mod;
        c[j+10]%=mod;
    }
 
    for(ll j=1;j<=200010;j++){
        c[j]+=c[j-1];
        c[j]%=mod;
    }
 
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}