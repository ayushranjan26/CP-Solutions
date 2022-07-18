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
ll M =1000000007;

ll dp[100001];
void solve()
{
    ll i,j,k,x,n;
    cin>>n;
    cout<<dp[n];
    return;
}

int main()

{
    //IOS;
    ll t;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(ll i=4;i<=100000;i++){
        dp[i]=2*dp[i-1];
        dp[i]%=M;
    }
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
