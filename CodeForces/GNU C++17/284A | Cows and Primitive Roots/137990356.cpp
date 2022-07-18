#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
//const int mod = 1e9+7;
 
int power(int a,int b,int mod) {
    int result=1;
    while(b)
    {   if(b%2) result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}
 
void solve(){
    int i,j,p;
    cin>>p;
    int ans=0;
    for(i=1;i<p;i++){
        bool flg=true;
        for(j=1;j<p-1;j++){
            int d=(power(i,j,p)-1+p)%p;
            if(d==0){
                flg=false;
            }
        }
        int d=(power(i,p-1,p)-1+p)%p;
        if(d!=0){
            flg=false;
        }
        if(flg){
            ans++;
        }
    }
    cout<<ans;
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