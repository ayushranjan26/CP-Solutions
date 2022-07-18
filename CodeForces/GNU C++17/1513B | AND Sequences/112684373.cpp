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
 
ll p[200005];
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    ll a[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
 
    ll x=a[0];
 
    for(i=1;i<n;i++){
        x=x&a[i];
    }
 
    ll c1=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            c1++;
        }
    }
 
    if(c1<=1){
        cout<<"0";
        return;
    }
 
    ll ans=c1*(c1-1);
    ans%=mod;
    ans=ans*p[n-2];
    ans%=mod;
    cout<<ans;
    return ;
}
int main()
 
{
    //IOS;
    ll t;
    p[0]=1;
    p[1]=1;
    for(ll i=2;i<200005;i++){
        p[i]=i*p[i-1];
        p[i]%=mod;
    }
    cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}