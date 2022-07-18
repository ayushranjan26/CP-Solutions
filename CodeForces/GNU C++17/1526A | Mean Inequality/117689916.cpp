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
    ll i,j,n,m,k,d=-1;
    cin>>n;
    ll a[2*n];
    for(i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    ll ans[2*n];
    k=0;
    for(i=0;i<2*n;i+=2){
        ans[i]=a[k];
        k++;
    }
    k=2*n-1;
    for(i=1;i<2*n;i+=2){
        ans[i]=a[k];
        k--;
    }
    for(i=0;i<2*n;i++){
        cout<<ans[i]<<" ";
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
        cout<<endl;
    }
    return 0;
}