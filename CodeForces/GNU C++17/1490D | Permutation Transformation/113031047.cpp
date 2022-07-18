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
ll mod =1000000007;
 
ll a[101];
map<ll,ll> mp;
void rec(ll l,ll r,ll cnt){
    ll i,j;
    //cout<<l<<" "<<r<<endl;
    ll mx=0;
    if(l>=r){
        return;
    }
    j=l;
    for(i=l;i<r;i++){
        if(a[i]>mx){
            mx=a[i];
            j=i;
        }
    }
    mp[mx]=cnt;
    rec(l,j,cnt+1);
    rec(j+1,r,cnt+1);
}
void solve()
{
    ll i,j,k,n,m,d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==n){
            rec(0LL,i,1);
            rec(i+1,n,1);
            mp[n]=0;
            break;
        }
    }
    for(i=0;i<n;i++){
        cout<<mp[a[i]]<<" ";
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