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
 
void solve()
{
    ll i,j,k,n,m,d;
    cin>>n;
    ll a[n];
    vector<ll> ve,vo;
    ll ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i%2){
            vo.push_back(a[i]);
        }
        else{
            ve.push_back(a[i]);
            ans+=a[i];
        }
    }
    vector<ll> v1,v2;
    ll sz1,sz2;
    sz1=ve.size();
    sz2=vo.size();
    d=min(sz1,sz2);
    for(i=0;i<d;i++){
        v1.push_back(vo[i]-ve[i]);
    }
    d=min(sz1-1,sz2);
    for(i=0;i<d;i++){
        v2.push_back(vo[i]-ve[i+1]);
    }
 
    ll sum=0;
    ll mx=0;
    for(i=0;i<v1.size();i++){
        sum=max(v1[i],sum+v1[i]);
        mx=max(mx,sum);
    }
    ll sum1=0;
    ll mx1=0;
    for(i=0;i<v2.size();i++){
        sum1=max(v2[i],sum1+v2[i]);
        mx1=max(mx1,sum1);
    }
 
    ans=max({ans,ans+mx,ans+mx1});
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