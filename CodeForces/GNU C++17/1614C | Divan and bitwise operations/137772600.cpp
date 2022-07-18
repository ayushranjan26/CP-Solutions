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
    int i,j,n,m;
    cin>>n>>m;
    int val=0;
    while(m--){
        int l,r,x;
        cin>>l>>r>>x;
        val|=x;
    }
    int ans=val*power(2,n-1);
    ans%=mod;
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