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

void solve()
{
    ll i,j,k,n,m,d;
    cin>>n;
    ll a[n],b[n],c[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    ll dp[n][3];
    dp[0][0]=a[0];
    dp[0][1]=b[0];
    dp[0][2]=c[0];
    for(i=1;i<n;i++){
        dp[i][0]=a[i]+max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=b[i]+max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=c[i]+max(dp[i-1][1],dp[i-1][0]);
    }
    cout<<max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    return ;
}

int main()
{
    IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
