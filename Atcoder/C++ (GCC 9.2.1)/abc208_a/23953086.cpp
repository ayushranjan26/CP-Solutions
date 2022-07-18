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

ll dp[102][100002];
void solve()
{
    ll i,j,k,n,m,w,d;
    cin>>n>>w;
    ll wt[n],v[n];
    for(i=0;i<n;i++){
        cin>>wt[i]>>v[i];
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=w;j++){
            dp[i][j]=dp[i-1][j];
            d=j-wt[i-1];
            if(d>=0){
                dp[i][j]=max(dp[i][j],dp[i-1][d]+v[i-1]);
            }
        }
    }
    cout<<dp[n][w];
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
