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
    ll i,j,k,l,n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll a[n+1]={0};
    for(i=1;i<=n;i++){
        a[i]+=(s[i-1]-'a'+1);
    }
    for(i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
 
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--,r--;
        cout<<a[r+1]-a[l]<<endl;
    }
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}