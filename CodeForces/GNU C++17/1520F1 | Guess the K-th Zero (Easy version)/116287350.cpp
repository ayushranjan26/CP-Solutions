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
ll Q(ll l,ll r){
    cout<<"? "<<l<<" "<<r<<endl;
    ll a;
    cin>> a;
    return a;
}
 
void solve()
{
    ll i,j,n,d,t;
    cin>>n>>t;
    ll k;
    for(i=0;i<t;i++){
        cin>>k;
    }
    ll low=1,high=n;
    while(low<high){
        ll mid=(low+high)/2;
        d=Q(low,mid);
        if(mid-low+1-d>=k){
            high=mid;
        }
        else{
            k-=mid-low+1-d;
            low=mid+1;
        }
    }
    cout<<"! "<<low;
    return;
}
 
int main()
 
{
    //IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}