#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int f[1000006];
void solve(){
    int i,j,n,k;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    int res=0;
    for(i=0;i<n;i++){
        res^=p[i];
    }
    for(i=2;i<=n;i++){
        int d=n/i;
        f[0]+=d;
        f[i]-=d;
        d=n%i;
        f[1]+=1;
        f[d+1]-=1;
    }
    for(i=1;i<=n;i++){
        f[i]+=f[i-1];
    }
    for(i=0;i<=n;i++){
        f[i]=f[i]%2;
        if(f[i]){
            res^=i;
        }
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