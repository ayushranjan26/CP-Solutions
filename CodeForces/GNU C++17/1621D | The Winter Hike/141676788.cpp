#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int calc(vector<int>& v){
    int i,j,n=v.size();
    int pre[n+1]={0};
    for(i=1;i<=n;i++){
        pre[i]+=pre[i-1]+v[i-1];
    }
    int r=1e18;
    for(i=n/2;i<n;i++){
        r=min(r,pre[i]-pre[i-n/2]);
    }
    return r;
}
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[2*n][2*n];
    for(i=0;i<2*n;i++){
        for(j=0;j<2*n;j++){
            cin>>a[i][j];
        }
    }
    int res=0;
    for(i=n;i<2*n;i++){
        for(j=n;j<2*n;j++){
            res+=a[i][j];
        }
    }
    int extra=min({a[0][n],a[0][2*n-1],a[n-1][n],a[n-1][2*n-1], a[n][0],a[n][n-1], a[2*n-1][0],a[2*n-1][n-1]});
    res+=extra;
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}