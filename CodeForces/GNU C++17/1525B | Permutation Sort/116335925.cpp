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
ll M =1000000007;
 
void solve()
{
    ll i,j,n,d,k;
    cin>>n;
    ll p[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    ll f=1;
    for(i=1;i<n;i++){
        if(p[i]<p[i-1]){
            f=0;
        }
    }
    if(f==1){
        cout<<"0";
        return;
    }
    if(p[0]==1||p[n-1]==n){
        cout<<"1";
        return;
    }
    if(p[0]==n&&p[n-1]==1){
        cout<<"3";
        return;
    }
    cout<<"2";
    return;
}
 
int main()
 
{
    //IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}