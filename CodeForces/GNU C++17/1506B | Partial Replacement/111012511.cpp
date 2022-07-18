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
 
 
void solve()
{
    ll i,j,k,n,m,x;
    string s;
    cin>>n>>k>>s;
    vector<ll> v;
    for(i=0;i<n;i++){
        if(s[i]=='*'){
            v.push_back(i);
        }
    }
    ll ans=0;
    ll ls=v[0];
    for(i=1;i<v.size();i++){
        if(v[i]-ls>k){
            ans++;
            ls=v[i-1];
        }
    }
    if(v.size()==1){
        cout<<"1";
        return;
    }
    cout<<ans+2;
    return ;
}
 
int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}