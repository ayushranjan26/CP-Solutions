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
ll test=0;
void solve()
{
    test++;
    ll i,j,k,n,c;
    cin>>n>>c;
 
    ll a[n]={0},b[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        cin>>b[i];
    }
 
    ll mny=0,days=0;
    ll ans=INF;
 
    for(i=0;i<n;i++){
        ans=min(ans,days+max(0LL,c-mny+a[i]-1)/a[i]);
        ll nd=max(0LL,b[i]-mny+a[i]-1)/a[i];
        days+=nd+1;
        mny+=a[i]*nd-b[i];
    }
    cout<<ans;
    return ;
}
int main()
 
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}
/*
1
3 20
3 4 10
1 2
*/