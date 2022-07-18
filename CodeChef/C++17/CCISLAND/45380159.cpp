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
#define mem(a,b) memset(a,b,sizeof(a))

using namespace std;

ll const INF =1e18;
ll M =1000000007;

ll v[505][505],h[505][505],dp[505][505][25];
void solve()
{
    ll i,j,k,n,m,d,x,y,xr,yr;
    cin>>x>>y>>xr>>yr>>d;
    if(x/xr>=d&&y/yr>=d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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
        cout<<"\n";
    }
    return 0;
}
