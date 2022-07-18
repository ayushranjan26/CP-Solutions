#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int sm=0;
    map<int,int> m;
    for(i=0;i<n;i++){
        cin>>k;
        sm+=k;
        m[k]++;
    }
 
    int d=sm*(n-2);
    int x,y,z,w;
    x=__gcd(sm,n);
    y=sm/x;
    z=n/x;
    w=(n-2)/z;
    d=y*w;
    if((n-2)%z!=0){
        cout<<"0";
        return ;
    }
    d=sm-d;
    int ans=0;
    for(auto it: m){
        if(m.find(d-it.ft)!=m.end()){
            if(it.ft==d-it.ft){
                ans+=it.sd*(m[d-it.ft]-1);
            }
            else{
                ans+=it.sd*m[d-it.ft];
            }
        }
    }
    cout<<ans/2;
    return;
}
 
int32_t main(){
    //IOS;
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