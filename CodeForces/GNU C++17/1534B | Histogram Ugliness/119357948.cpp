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
    ll i,j,k,n,m;
    cin>>n;
    ll a[n];
    ll ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    if(n>1){
        if(a[0]>a[1]){
            ans+=a[0]-a[1];
            a[0]=a[1];
        }
        if(a[n-1]>a[n-2]){
            ans+=a[n-1]-a[n-2];
            a[n-1]=a[n-2];
        }
    }
 
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            ans+=a[i]-max(a[i-1],a[i+1]);
            a[i]=max(a[i-1],a[i+1]);
        }
    }
    ans+=a[0]+a[n-1];
    for(i=1;i<n;i++){
        ans+=abs(a[i]-a[i-1]);
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