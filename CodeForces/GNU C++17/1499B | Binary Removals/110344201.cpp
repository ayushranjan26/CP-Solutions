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
    ll i,j,k,n;
    string s;
    cin>>s;
    ll c=0;
    ll f=0;
    for(i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]&&s[i]=='1'){
            c=1;
        }
        if(s[i]==s[i+1]&&s[i]=='0'&&c){
            f=1;
        }
    }
    if(c+f==2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
 
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