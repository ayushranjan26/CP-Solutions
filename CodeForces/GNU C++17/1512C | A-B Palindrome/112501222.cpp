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
    ll i,j,k,n,a,b,x,y,d;
    cin>>a>>b;
    x=a,y=b;
    string s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++){
        if(s[i]=='0'&&s[n-i-1]=='?'){
            s[n-i-1]='0';
        }
        if(s[i]=='1'&&s[n-i-1]=='?'){
            s[n-i-1]='1';
        }
    }
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            a--;
        }
        if(s[i]=='1'){
            b--;
        }
    }
    if(n%2==0){
        for(i=0;i<n;i++){
            if(s[i]=='?'&&a>1){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            if(s[i]=='?'&&b>1){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
    }
    else{
        if(s[n/2]=='?'){
            if(a%2){
                s[n/2]='0';
                a--;
            }
            else{
                s[n/2]='1';
                b--;
            }
        }
        for(i=0;i<n;i++){
            if(s[i]=='?'&&a>1){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            if(s[i]=='?'&&b>1){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
    }
    for(i=0;i<n;i++){
        if(s[i]=='?'||a>0||b>0){
            cout<<"-1";
            return;
        }
        if(s[i]!=s[n-1-i]){
            cout<<"-1";
            return;
        }
    }
    cout<<s;
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
       cout<<"\n";
    }
    return 0;
}