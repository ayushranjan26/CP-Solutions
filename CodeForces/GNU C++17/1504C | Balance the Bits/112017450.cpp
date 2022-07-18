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
    ll i,j,n,m,k,c0=0,c1=0;
    string s;
    cin>>n>>s;
    if(s[0]=='0'||s[n-1]=='0'){
        cout<<"NO";
        return;
    }
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    c1/=2;
    if(c0%2){
        cout<<"NO";
        return;
    }
    string a,b;
    a=s;
    ll f0=1;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            if(c1){
                a[i]='(';
                c1--;
            }
            else{
                a[i]=')';
            }
        }
        else{
            if(f0){
                a[i]='(';
                f0=0;
            }
            else{
                a[i]=')';
                f0=1;
            }
        }
    }
    b=a;
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            if(a[i]=='('){
               b[i]=')';
            }
            else{
                b[i]='(';
            }
        }
    }
    cout<<"YES\n"<<a<<"\n"<<b;
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