#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int power(int a,int b) {
    int result=1;
    while(b)
    {   if(b%2) result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}
 
void solve(){
    int i,n;
    cin>>n;
    int c0=0,c1=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            c0++;
        }
        if(a[i]==1){
            c1++;
        }
    }
    int res=pow(2,c0);
    res=res*c1;
    cout<<res;
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