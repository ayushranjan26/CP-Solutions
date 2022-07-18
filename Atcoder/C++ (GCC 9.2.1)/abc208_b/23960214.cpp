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

ll dp[101][100001];

void solve()
{
    ll i,j,k,n,m,w,d;
    cin>>n>>w;
    ll wt[n],v[n];
    for(i=0;i<n;i++){
        cin>>wt[i]>>v[i];
    }

    for(i=0;i<101;i++){
        for(j=0;j<100001;j++){
            dp[i][j]=1e18;
        }
    }

    dp[0][0]=0;
    dp[0][v[0]]=wt[0];

    for(i=1;i<n;i++){
        dp[i][0]=0;
        for(j=1;j<100001;j++){
            dp[i][j]=dp[i-1][j];
            d=j-v[i];
            if(d>=0){
                dp[i][j]=min(dp[i][j],dp[i-1][d]+wt[i]);
            }
        }
    }
    for(i=100000;i>=0;i--){
        if(dp[n-1][i]<=w){
            cout<<i;
            return;
        }
    }
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
