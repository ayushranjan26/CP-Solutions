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
    ll i,j,k;
    cin>>n>>m;
    string s;
    a.clear();
    for(i=0;i<n;i++){
        cin>>s;
        a.push_back(s);
    }

    vector<ll> v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]=='1'){
                cnt=0;
                rec(i,j);
                v.pb(cnt);
            }
        }
    }

    ll ans=0;
    sort(v.rbegin(),v.rend());
    for(i=1;i<v.size();i+=2){
        ans+=v[i];
    }
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
        cout<<"\n";
    }
    return 0;
}
