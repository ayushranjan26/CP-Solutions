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
    ll i,j,x,y,k,n,m;
    string s;
    cin>>n>>m;
    vector<string> v;
    for(i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    ll ans=0;
    x=0,y=0;
    while(1){
        //cout<<x<<" "<<y<<endl;
        k=INF;
        ll x1=n,y1=m;
 
        for(i=x;i<n;i++){
            for(j=y;j<n;j++){
                if(i==x&&j==y){
                    continue;
                }
                if(v[i][j]=='*'&&k>i-x+j-y){
                    k=i-x+j-y;
                    x1=i;
                    y1=j;
                    //cout<<x1<<" "<<y1<<endl;
                }
            }
        }
        x=x1;
        y=y1;
         if(x1==n&&y1==m){
            break;
        }
        ans++;
    }
    if(v[0][0]=='*'){
        ans++;
    }
    cout<<ans;
    return ;
}
 
int main()
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
 