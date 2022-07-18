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
    int i,j,n,l,r,k;
    cin>>n>>l>>r>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0,sm=0;
    for(i=0;i<n;i++){
        if(a[i]>=l&&a[i]<=r&&a[i]+sm<=k){
            sm+=a[i];
            cnt++;
        }
    }
    cout<<cnt;
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