#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
const int m = 1e9+7;
 
int power(int x,int y) {
 int temp;
 if( y == 0)
  return 1;
 temp = power(x, y/2)%m;
 if (y%2 == 0)
  return ((temp)*(temp))%m;
 else
  return (((x)%m)*((temp*temp)%m))%m;
}
int fac[1000009];
void factorial(){
    fac[0]=1;
    for(int i=1;i<=1000000;i++)fac[i]=(i*fac[i-1])%mod;
}
int ncr(int n,int r){
    return (fac[n]*((power(fac[r],mod-2)*power(fac[n-r],mod-2))%mod))%mod;
}
 
void solve(){
    int i,j,n,a,b;
    factorial();
    cin>>a>>b>>n;
    string sa,sb;
    sa=to_string(a);
    sb=to_string(b);
    int res=0;
    for(i=0;i<=n;i++){
        int d=a*i+(n-i)*b;
        string s=to_string(d);
        bool flg=true;
        for(j=0;j<s.size();j++){
            if(s[j]!=sa[0]&&s[j]!=sb[0]){
                flg=false;
            }
        }
        //cout<<s<<endl;
        if(flg){
            //cout<<s<<" "<<i<<" "<<n-i<<endl;
            res+=ncr(n,i);
        }
        res%=mod;
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