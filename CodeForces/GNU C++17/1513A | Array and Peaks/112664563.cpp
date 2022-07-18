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
    cin>>n>>k;
    ll x=1,y=n;
    ll a[n]={0};
    for(i=1;i<n-1;i+=2){
        if(k>0){
            a[i]=y;
            y--;
            k--;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            a[i]=x;
            x++;
        }
    }
    if(k){
        cout<<"-1";
        return;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
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