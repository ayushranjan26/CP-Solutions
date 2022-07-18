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
    cin>>n;
    vector<ll> x,y;
    for(i=0;i<2*n;i++){
        cin>>u>>v;
        u=abs(u);
        v=abs(v);
        if(u==0){
            y.push_back(v);
        }
        else{
            x.push_back(u);
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    double ans=0;
    for(i=0;i<n;i++){
        //cout<<x[i]<<" "<<y[i]<<endl;
        ans+=sqrt(x[i]*x[i]+y[i]*y[i]);
 
    }
    cout<<fixed<<setprecision(10)<<ans;
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