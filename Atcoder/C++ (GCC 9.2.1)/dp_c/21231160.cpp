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
    ll h[n];
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    ll dp[n]={0};
    dp[1]=abs(h[1]-h[0]);
    for(i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout<<dp[n-1];
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
