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
    ll i,j,k,n,u,v;
    cin>>u>>v;
    if(v>=u){
        vector<ll> a,b;
        for(i=0;i<31;i++){
            if(u&(1<<i))a.push_back(i);
            if(v&(1<<i))b.push_back(i);
        }
        if(a.size()>=b.size()){
            for(i=0;i<b.size();i++){
                if(a[i]>b[i]){
                    cout<<"NO";
                    return;
                }
            }
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
    return;
}
 
int main()
{
    //IOS;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}