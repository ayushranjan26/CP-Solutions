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
    ll i,j,k,n;
    cin>>n;
    ll a[n];
    ll mn=INF,i1=0,i2=0;
    ll mx=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(mn>a[i]){
            i1=i;
            mn=a[i];
        }
        if(mx<a[i]){
            i2=i;
            mx=a[i];
        }
    }
    //cout<<i1<<" "<<i2<<endl;
    ll x1,x2,ans=0;
    x1=min(i1+1,n-i1);
    x2=min(i2+1,n-i2);
    if(i1>i2){
        swap(i1,i2);
    }
    ans=min({i1+1+n-i2,i2+1,n-i1});
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