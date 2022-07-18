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
 
ll n,m;
pair<ll,ll> sgt[4*1000001];
ll sg[4*1000001];
string str;
void b_sgt(ll s,ll e,ll id){
    if(s==e){
        if(str[s]=='('){
            sgt[id].first=1;
            sgt[id].second=0;
        }
        else{
            sgt[id].first=0;
            sgt[id].second=1;
        }
        return;
    }
    ll mid=(s+e)/2;
    b_sgt(s,mid,2*id+1);
    b_sgt(mid+1,e,2*id+2);
    sg[id]=2*min(sgt[2*id+1].first,sgt[2*id+2].second)+sg[2*id+1]+sg[2*id+2];
    sgt[id].first=sgt[2*id+1].first+sgt[2*id+2].first-min(sgt[2*id+1].first,sgt[2*id+2].second);
    sgt[id].second=sgt[2*id+1].second+sgt[2*id+2].second-min(sgt[2*id+1].first,sgt[2*id+2].second);
    return;
}
typedef pair<ll,ll>pii;
typedef pair<ll,pii> node;
node rng_sm(ll s,ll e,ll l,ll r,ll id){
    if(l>r){
        return node(0,pii(0,0));
    }
    if(l==s&&r==e){
        return node(sg[id],sgt[id]);
    }
    ll mid=(s+e)/2;
    node lft=rng_sm(s,mid,l,min(r,mid),2*id+1), rght=rng_sm(mid+1,e,max(l,mid+1),r,2*id+2), mdl;
    mdl.ft=lft.ft+rght.ft+2*min(lft.sd.ft,rght.sd.sd);
    mdl.sd.ft=lft.sd.ft+rght.sd.ft-min(lft.sd.ft,rght.sd.sd);
    mdl.sd.sd=lft.sd.sd+rght.sd.sd-min(lft.sd.ft,rght.sd.sd);
    return mdl;
}
void solve()
{
    ll i,j,k;
    cin>>str>>m;
    n=str.size();
    b_sgt(0,n-1,0);
    for(i=0;i<m;i++){
        ll l1,r1;
        cin>>l1>>r1;
        node ans=rng_sm(0,n-1,l1-1,r1-1,0);
        cout<<ans.first<<"\n";
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
/*
void upd(ll s,ll e,ll id,ll l,ll r,ll val){
    if(s==e){
        sgt[id]=val;
        return;
    }
    ll mid=(s+e)/2;
    if(pos<=mid){
        upd(s,mid,2*id+1,pos,val);
    }
    else{
        upd(mid+1,e,2*id+2,pos,val);
    }
    sgt[id]=(sgt[2*id+1]|sgt[2*id+2]);
    return;
}*/