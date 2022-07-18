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
    ll i,j,n,m,k,x,d;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>> v;
    vector<ll> vv;
    vv.push_back(1);
    v.push_back(vv);
    for(i=1;i<n;i++){
        ll sz=v[i-1].size();
        if(a[i]==1){
            vv.clear();
            for(j=0;j<sz;j++){
                vv.push_back(v[i-1][j]);
            }
            vv.push_back(1);
            v.push_back(vv);
            continue;
        }
        for(j=sz-1;j>=0;j--){
            d=v[i-1][j];
            if(a[i]-1==d){
                vv.clear();
                for(k=0;k<j;k++){
                    vv.push_back(v[i-1][k]);
                }
                vv.push_back(v[i-1][j]+1);
                v.push_back(vv);
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<v[i].size()-1;j++){
            cout<<v[i][j]<<".";
        }
        cout<<v[i][v[i].size()-1];
        cout<<endl;
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
        cout<<endl;
    }
    return 0;
}