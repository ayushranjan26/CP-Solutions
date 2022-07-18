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
    ll i,j,k,n;
    char c;
    cin>>n>>k;
    string ans="";
    for(i=0;i<k;i++){
        ans+=(char)('a'+i);
        for(j=i+1;j<k;j++){
            ans+=(char)('a'+i);
            ans+=(char)('a'+j);
        }
    }
    while(ans.size()<n){
        ans+=ans;
    }
    for(i=0;i<n;i++){
        cout<<ans[i];
    }
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