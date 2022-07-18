#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
 
void solve(){
    int i,j,k,n,l,r;
    cin>>l>>r;
    int ans;
    if(l<=(r-1)/2){
        ans=(r-1)/2;
    }
    if(l>(r-1)/2){
        if(r==2*l){
            r--;
        }
        ans=r%l;
    }
    cout<<ans;
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