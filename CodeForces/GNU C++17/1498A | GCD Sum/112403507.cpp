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
    ll i,j,k,n,sm=0;
    cin>>n;
 
    for(j=0;j<15;j++){
        string s=to_string(n);
        sm=0;
        for(i=0;i<s.size();i++){
            sm+=s[i]-'0';
        }
        //cout<<GCD(n,sm)<<" ";
        if(GCD(n,sm)!=1){
            cout<<n;
            return;
        }
        n++;
    }
 
 
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