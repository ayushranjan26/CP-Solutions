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
    int i,j,n,l,r,ql,qr;
    cin>>n>>l>>r>>ql>>qr;
    int w[n];
    for(i=0;i<n;i++){
        cin>>w[i];
    }
    int pre[n+1]={0};
    for(i=1;i<=n;i++){
        pre[i]+=pre[i-1]+w[i-1];
    }
    int res=1e18;
    for(i=0;i<=n;i++){
        int lft,rgt;
        lft=pre[i]*l;
        rgt=(pre[n]-pre[i])*r;
        int le,re;
        le=i;
        re=n-le;
        int extra=0;
        if(le>re){
            extra=ql*(le-re-1);
        }
        if(re>le){
            extra=qr*(re-le-1);
        }
        res=min(res,lft+rgt+extra);
    }
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}