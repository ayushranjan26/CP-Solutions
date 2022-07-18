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
ll mod =1000000007;
int gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}
ll po(ll x,ll y){
    ll z=1;
    for(ll i=0;i<y;i++){
        z=z*x;
    }
    return z;
}
void solve()
{
    ll i,j,k,n,a,b,c;
    cin>>a>>b>>c;
    ll x,y;
    x=po(10,a-1);
    y=po(10,b-1);
    if(x<y){
        swap(x,y);
    }
    y+=po(10,c-1);
    string s=to_string(y);
    if(s.size()==a){
        swap(x,y);
    }
    cout<<x<<" "<<y;
    return ;
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