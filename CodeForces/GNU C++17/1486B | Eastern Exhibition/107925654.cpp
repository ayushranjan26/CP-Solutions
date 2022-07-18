/*WELCOME TO AYUSH RANJAN CODE'S*/
 
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
 
 
void solve()
{
    ll i,j,k,q,n,y1,x1,z;
    cin>>n;
    ll x[n],y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    x1=abs(x[(n-1)/2]-x[(n)/2])+1;
    y1=abs(y[(n-1)/2]-y[(n)/2])+1;
    ll ans=x1*y1;
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
        cout<<"\n";
    }
    return 0;
}