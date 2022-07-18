/*WELCOME TO AYUSH RANJAN CODE*/
 
#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
ll const INF =1e18;
ll M =1000000007;
 
void solve()
{
    ll i,j,k,n;
    cin>>n;
    ll a[n];
    ll sm=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sm+=a[i];
    }
    if(sm%n!=0){
        cout<<"-1";
        return;
    }
    ll cnt=0;
    for(i=0;i<n;i++){
        if(a[i]>(sm/n)){
            cnt++;
        }
    }
    cout<<cnt;
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