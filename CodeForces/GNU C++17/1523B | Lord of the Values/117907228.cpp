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
    ll i,j,n,m,k,x;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<3*n<<endl;
    for(i=1;i<=n;i+=2){
        cout<<2<<" "<<i<<" "<<i+1<<endl;
        cout<<1<<" "<<i<<" "<<i+1<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<endl;
        cout<<1<<" "<<i<<" "<<i+1<<endl;
        cout<<2<<" "<<i<<" "<<i+1<<endl;
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