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
    int i,j,n,h;
    cin>>n>>h;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int lo=1,hi=h;
    int ans=hi;
    while(lo<=hi){
        int m=lo+(hi-lo)/2;
        int dam=m;
        for(i=0;i<n-1;i++){
            if(a[i]+m<=a[i+1]){
                dam+=m;
            }
            else{
                dam+=a[i+1]-a[i];
            }
        }
        if(dam>=h){
            ans=min(ans,m);
            hi=m-1;
        }
        else{
            lo=m+1;
        }
    }
    cout<<ans;
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