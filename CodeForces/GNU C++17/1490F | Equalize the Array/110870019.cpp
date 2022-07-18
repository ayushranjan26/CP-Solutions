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
    ll i,j,k,n,d;
    cin>>n;
    map<ll,ll> m;
    for(i=0;i<n;i++){
        cin>>d;
        m[d]++;
    }
    ll sm=0;
    vector<ll> v;
    for(auto it:m){
        sm+=it.second;
        v.push_back(it.second);
    }
 
    sort(v.begin(),v.end());
    set<ll> s;
    ll ans=INF;
    ll sm2=0;
    for(i=0;i<v.size();i++){
        d=s.size();
        s.insert(v[i]);
        if(s.size()>d){
            ll ans2=sm2+sm-v[i]*(v.size()-i);
            ans=min(ans,ans2);
        }
        sm2+=v[i];
        sm-=v[i];
    }
    cout<<ans;
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