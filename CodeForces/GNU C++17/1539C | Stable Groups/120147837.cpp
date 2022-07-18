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
 
void solve()
{
    ll i,j,k,l,x,n,q;
    cin>>n>>k>>x;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    vector<ll> v;
    for(i=1;i<n;i++){
        if(a[i]-a[i-1]>x){
            v.push_back(a[i]-a[i-1]);
        }
    }
    sort(v.begin(),v.end());
    ll cnt=0;
    for(i=0;i<v.size();i++){
        ll d1=(v[i]-1)/x;
        //cout<<v[i]<<" ";
        if(k>=d1){
            k-=d1;
            cnt++;
        }
    }
    ll ans=v.size()+1;
    cout<<ans-cnt;
    return;
 
}
 
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}