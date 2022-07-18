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
    cin>>n;
    d=205000000000000000;
    ll ans=0;
    while(1){
        if(d<2050){
            break;
        }
        while(n>=d){
            n-=d;
            ans++;
            if(n==0){
                cout<<ans;
                return;
            }
        }
        d/=10;
    }
    if(n==0){
        cout<<ans;
    }
    else{
        cout<<"-1";
    }
 
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