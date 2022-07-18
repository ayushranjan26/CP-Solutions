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
    ll i,j,k,n,q,u,v;
    cin>>n>>k;
    string s;
    cin>>s;
    i=0;
    ll f=1;
    if(k==0){
        cout<<"YES";
        return;
    }
    if(k==n/2&&n%2==0){
        cout<<"NO";
        return;
    }
    while(i<k){
        if(s[i]!=s[n-i-1]){
            f=0;
        }
        i++;
    }
    if(f){
        cout<<"YES";
        return;
    }
    else{
        cout<<"NO";
        return;
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