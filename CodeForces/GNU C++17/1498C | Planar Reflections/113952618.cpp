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
 
void solve()
{
    ll i,j,k,n,m,d;
    cin>>n>>k;
    ll a[k+2][n+1];
    for(i=0;i<k+2;i++){
        for(j=0;j<n+1;j++){
            a[i][j]=0;
        }
    }
    a[k][0]=1;
    ll f=1;
    for(i=k;i>0;i--){
        if(f){
            for(j=1;j<=n;j++){
                a[i][j]+=(a[i][j-1]+a[i+1][j]);
                a[i][j]%=M;
            }
            f=0;
        }
        else{
            for(j=n-1;j>=0;j--){
                a[i][j]+=(a[i][j+1]+a[i+1][j]);
                a[i][j]%=M;
            }
            f=1;
        }
    }
 
    ll ans=0;
    for(i=1;i<=k;i++){
        ans+=a[i][0];
        ans%=M;
        ans+=a[i][n];
        ans%=M;
    }
    cout<<ans-1;
    return;
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