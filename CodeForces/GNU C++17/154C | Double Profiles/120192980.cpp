#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll const INF =1e18;
ll M =1000000007;
 
pair<int,int> hash1(vector<int> v){
    sort(v.begin(),v.end());
 
    ll p=1000003,mod=1e9+9;
    ll hash_val1=0;
    ll p_val=1;
    for(int i=0;i<v.size();i++){
        hash_val1+=(p_val*v[i])%mod;
        p_val=(p_val*p)%mod;
    }
 
    p=1000003;
    mod=1e9+7;
    ll hash_val2=0;
    p_val=1;
    for(int i=0;i<v.size();i++){
        hash_val2+=(p_val*v[i])%mod;
        p_val=(p_val*p)%mod;
    }
    return make_pair(hash_val1,hash_val2);
}
 
void solve()
{
    ll i,j,k,l,n,m;
    cin>>n>>m;
    vector<int> v[n+1];
    for(i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    map<pair<ll,ll>,ll> m1;
    map<pair<ll,ll>,ll> m2;
    pair<ll,ll> p1;
    for(i=1;i<=n;i++){
        p1=hash1(v[i]);
        m1[p1]++;
        v[i].push_back(i);
        p1=hash1(v[i]);
        m2[p1]++;
    }
    ll ans=0;
    for(auto it:m2){
        ans+=(it.sd*(it.sd-1))/2;
    }
    for(auto it:m1){
        ans+=(it.sd*(it.sd-1))/2;
    }
    cout<<ans;
    return;
 
}
 
int main()
{
    IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        //cout<<endl;
    }
    return 0;
}