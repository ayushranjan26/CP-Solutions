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
    ll i,j,k,n,m,d,w;
    cin>>n>>w;
    map<ll,ll> mp;
    vector<ll> v;
    for(i=0;i<n;i++){
        cin>>d;
        v.push_back(d);
        mp[d]++;
    }
    sort(v.rbegin(),v.rend());
    ll ans=0;
 
    for(i=0;i<n;i++){
        d=w;
        if(mp[v[i]]<=0){
            continue;
        }
        else{
            ans++;
           // cout<<v[i]<<"-";
            j=35;
            while(j>=0){
                mp[pow(2,j)]++;
                mp[pow(2,j)]--;
                if(pow(2,j)<=d&&mp[pow(2,j)]>0){
                    //cout<<d<<" "<<pow(2,j)<<endl;
                    d-=pow(2,j);
                    mp[pow(2,j)]--;
                    j++;
                }
                j--;
            }
 
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