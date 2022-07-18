/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    ll i,j,k,n=1,l,r;
    cin>>l>>r;
    ll ans=0;
    for(i=0;i<10;i++){
        ans+=r/n;
        n=n*10;
    }
    n=1;
    for(i=0;i<10;i++){
        ans-=l/n;
        n=n*10;
    }
    cout<<ans;
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
        cout<<endl;
    }
    return 0;
}