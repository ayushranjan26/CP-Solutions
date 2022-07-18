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
    ll i,j,k,n,m;
    string s;
    cin>>s;
    ll f=1;
    for(i=2;i<s.size();i++){
        ll x,y,z;
        z=(int)s[i]-'A';
        y=(int)s[i-1]-'A';
        x=(int)s[i-2]-'A';
        if((x+y)%26!=z%26){
            f=0;
            //cout<<s[i]<<" "<<x<<" "<<y<<" "<<z;
        }
    }
    if(f){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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