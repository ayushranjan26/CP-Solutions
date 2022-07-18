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

vector<string> a;
ll n,m;
ll cnt;
void rec(ll r,ll c){
    if(r>=n||c>=m||r<0||c<0||a[r][c]=='0'){
        return;
    }
    cnt++;
    a[r][c]='0';
    rec(r+1,c);
    rec(r-1,c);
    rec(r,c+1);
    rec(r,c-1);
    return;
}

void solve()
{
    ll i,j,k,n,m,a,b,x,y;
    cin>>n>>m>>x>>y>>a>>b;
    ll d1=n+m-x-y;
    ll dd1,dd2,d2;
    dd1=n-a;
    dd2=m-b;
    d2=dd1+dd2-min(dd1,dd2);
    if(d1<=d2){
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
