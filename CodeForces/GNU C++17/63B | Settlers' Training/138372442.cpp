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
    int i,j,n,k;
    cin>>n>>k;
    int a[n],f[k+1]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
        f[a[i]]++;
    }
    int cnt=0;
    while(f[k]!=n){
        for(i=k-1;i>0;i--){
            if(f[i]>0){
                f[i]--;
                f[i+1]++;
            }
        }
        cnt++;
    }
    cout<<cnt;
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