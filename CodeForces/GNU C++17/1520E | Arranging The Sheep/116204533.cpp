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
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll> v;
    for(i=0;i<n;i++){
        if(s[i]=='*'){
            v.push_back(i);
        }
    }
    ll ans=0;
    if(v.size()==0){
        cout<<ans;
        return;
    }
    k=v[v.size()/2];
    ll c=1;
    for(i=0;i<v.size();i++){
        if(v[i]>k){
            ans+=v[i]-k-c;
            c++;
        }
    }
    c=1;
    for(i=v.size()-1;i>=0;i--){
        if(v[i]<k){
            ans+=k-v[i]-c;
            c++;
        }
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