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
    ll i,j,k,n,q,d;
    cin>>n>>q;
    ll f[51]={0};
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++){
        cin>>d;
        f[d]++;
        if(f[d]==1){
            v.push_back({i+1,d});
        }
    }
 
    while(q--){
        cin>>d;
        j=0;
        for(i=0;i<v.size();i++){
            if(v[i].sd==d){
                cout<<v[i].ft<<" ";
                j=i;
                v[i].ft=1;
                break;
            }
        }
        for(i=0;i<j;i++){
            v[i].ft++;
        }
        sort(v.begin(),v.end());
    }
    return ;
}
int main()
 
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
       cout<<"\n";
    }
    return 0;
}