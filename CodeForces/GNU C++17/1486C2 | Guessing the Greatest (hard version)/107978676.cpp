/*WELCOME TO AYUSH RANJAN CODE'S*/
 
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
 
int ask(ll l,ll r){
    ll x;
    if(l==r)
        return -1;
    cout<<"? "<<l<<" "<<r<<endl;
    cin>>x;
    return x;
}
void solve()
{
    ll i,j,k,q,n,y,x,z;
    cin>>n;
    ll l=1,r=n;
    ll pos=ask(l,r);
    if(ask(l,pos)==pos){
        r=pos;
        while(l<r){
            ll mid=(l+r+1)/2;
            if(ask(mid,n)==pos){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
        cout<<"! "<<l<<endl;
    }
    else{
        l=pos;
        while(l<r){
            ll mid=(l+r)/2;
            if(ask(1,mid)==pos){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout<<"! "<<l<<endl;
    }
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}