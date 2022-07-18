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
    ll i,j,k,n,m,d;
    cin>>n>>m;
    ll a[n][m];
    vector<ll> v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            v.push_back(a[i][j]);
        }
    }
 
    sort(v.begin(),v.end());
    k=0;
    set<pair<ll,ll>> s;
    for(ll h=0;h<m+1;h++){
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==v[k]&&s.find({i,j})==s.end()){
                swap(a[i][j],a[i][k]);
                s.insert({i,k});
                k++;
            }
            if(k==m){
                break;
            }
        }
        if(k==m){
            break;
        }
    }
    if(k==m){
        break;
    }
    }
 
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
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
        cout<<"\n";
    }
    return 0;
}