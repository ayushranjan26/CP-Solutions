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
 
ll n,m,sgt[4*200000],n1;
ll arr[200000];
void b_sgt(ll s,ll e,ll id,ll cnt){
    if(s==e){
        sgt[id]=arr[e];
        return;
    }
    ll mid=(s+e)/2;
    b_sgt(s,mid,2*id+1,cnt+1);
    b_sgt(mid+1,e,2*id+2,cnt+1);
    if((n1-cnt)%2==0){
        sgt[id]=sgt[2*id+1]^sgt[2*id+2];
    }
    else{
        sgt[id]=sgt[2*id+1]|sgt[2*id+2];
    }
    return;
}
 
void upd(ll s,ll e,ll id,ll pos,ll val,ll cnt){
    if(s==e){
        sgt[id]=val;
        return;
    }
    ll mid=(s+e)/2;
    if(pos<=mid){
        upd(s,mid,2*id+1,pos,val,cnt+1);
    }
    else{
        upd(mid+1,e,2*id+2,pos,val,cnt+1);
    }
    if((n1-cnt)%2==0){
        sgt[id]=sgt[2*id+1]^sgt[2*id+2];
    }
    else{
        sgt[id]=sgt[2*id+1]|sgt[2*id+2];
    }
    return;
}
 
ll rng_sm(ll s,ll e,ll l,ll r,ll id){
    if(l>r){
        return 0;
    }
    if(l==s&&r==e){
        return sgt[id];
    }
    ll mid=(s+e)/2;
    return rng_sm(s,mid,l,min(r,mid),2*id+1)+rng_sm(mid+1,e,max(l,mid+1),r,2*id+2);
}
void solve()
{
    ll i,j,k,q,p;
    cin>>n>>m;
    n1=n;
    n=1<<n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    b_sgt(0,n-1,0,0);
    while(m--){
        ll p,b;
        cin>>p>>b;
        upd(0,n-1,0,p-1,b,0);
        cout<<sgt[0]<<endl;
    }
    return;
}
 
int main()
{
    IOS;
    ll t;
    t=1;//cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}