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
ll const INF =1e18;
using namespace std;
 
void solve()
{
    ll i,j,k,q,n,m,y,x,z,u,v;
    cin>>n>>u>>v;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll diff=0;
    for(i=0;i<n-1;i++){
        diff=max(diff,abs(a[i]-a[i+1]));
    }
    //cout<<diff<<" ";
    if(diff>1){
        cout<<"0";
        return;
    }
    if(diff==1){
        cout<<min(u,v);
        return;
    }
    else{
        cout<<min({u+v,2*v});
        return;
    }
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