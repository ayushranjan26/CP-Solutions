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
 
ll GCD(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b,a%b);
}
 
void solve()
{
    ll i,j,k,n,w,d;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(s[i][j]=='*'){
                v.push_back({i,j});
            }
        }
    }
    ll x1,y1,x2,y2;
    x1=v[0].ft;
    y1=v[0].sd;
    x2=v[1].ft;
    y2=v[1].sd;
    if(x1==x2||y1==y2){
        if(x1==x2){
            if(x1+1<n){
                s[x1+1][y1]='*';
                s[x1+1][y2]='*';
            }
            else{
                s[x1-1][y1]='*';
                s[x1-1][y2]='*';
            }
        }
        else{
            if(y1+1<n){
                s[x1][y1+1]='*';
                s[x2][y2+1]='*';
            }
            else{
                s[x1][y1-1]='*';
                s[x2][y2-1]='*';
            }
        }
    }
    else{
        s[x1][y2]='*';
        s[x2][y1]='*';
    }
    for(i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return ;
}
int main()
 
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
       // cout<<"\n";
    }
    return 0;
}