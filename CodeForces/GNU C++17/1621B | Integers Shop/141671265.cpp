#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int l[n],r[n],c[n];
    for(i=0;i<n;i++){
        cin>>l[i]>>r[i]>>c[i];
    }
    int res[n];
    int lft=l[0],rgt=r[0];
    map<int,int> mpl;
    map<int,int> mpr;
    map<pii,int> mp;
 
    for(i=0;i<n;i++){
        lft=min(lft,l[i]);
        rgt=max(rgt,r[i]);
        if(mpl.find(l[i])==mpl.end()){
            mpl[l[i]]=c[i];
        }
        if(mpr.find(r[i])==mpr.end()){
            mpr[r[i]]=c[i];
        }
        if(mp.find({l[i],r[i]})==mp.end()){
            mp[{l[i],r[i]}]=c[i];
        }
        mpl[l[i]]=min(mpl[l[i]],c[i]);
        mpr[r[i]]=min(mpr[r[i]],c[i]);
        mp[{l[i],r[i]}]=min(mp[{l[i],r[i]}],c[i]);
        int costl,costr,combine=1e16;
        costl=mpl[lft];
        costr=mpr[rgt];
        if(mp.find({lft,rgt})!=mp.end()){
            combine=mp[{lft,rgt}];
        }
        res[i]=min(combine,costl+costr);
    }
 
    for(i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return;
}
 
int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}