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
#define mem(a,b) memset(a,b,sizeof(a))
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
ll v[505][505],h[505][505],dp[505][505][25];
void solve()
{
    ll i,j,k,n,m,d;
    cin>>n>>m>>k;
 
    for(i=0;i<n;i++){
        for(j=0;j<m-1;j++){
            cin>>h[i][j];
        }
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    if(k%2){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<"-1 ";
            }
            cout<<endl;
        }
        return;
    }
    k/=2;
    for(ll z=1;z<=k;z++){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                dp[i][j][z]=INF;
                if(i!=0){
                    //cout<<dp[i][j][z]<<endl;
                    dp[i][j][z]=min(dp[i][j][z],dp[i-1][j][z-1]+v[i-1][j]);
                    //cout<<dp[i][j][z]<<endl;
                }
                if(j!=0){
                    dp[i][j][z]=min(dp[i][j][z],dp[i][j-1][z-1]+h[i][j-1]);
                }
                if(i!=n-1){
                    dp[i][j][z]=min(dp[i][j][z],dp[i+1][j][z-1]+v[i][j]);
                }
                if(j!=m-1){
                    dp[i][j][z]=min(dp[i][j][z],dp[i][j+1][z-1]+h[i][j]);
                }
                //cout<<dp[i][j][z]<<endl;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<dp[i][j][k]*2<<" ";
        }
        cout<<endl;
    }
    return;
}
 
int main()
 
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}