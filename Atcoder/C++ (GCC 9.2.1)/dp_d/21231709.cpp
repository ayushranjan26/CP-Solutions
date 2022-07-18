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
    cin>>n>>k;
    ll h[n];
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    ll dp[n]={0};
    for(i=1;i<n;i++){
        dp[i]=INF;
        for(j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
            }
        }
        //cout<<dp[i]<<" ";
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
