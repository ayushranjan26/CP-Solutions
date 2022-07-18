#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    ll i,j,k,l,n,x,d1,t;
    cin>>n>>x>>t;
    d1=t/x;
    ll ans=0;
    if(d1+1>n){
        ans=(n*(n-1))/2;
    }
    else{
        ans+=(d1*(d1+1))/2;
        ans+=(n-d1-1)*d1;
    }
    cout<<ans;
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}