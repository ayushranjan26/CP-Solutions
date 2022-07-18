#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
long double eps= 1e-8;
void solve(){
    int i,j,k,n;
    cin>>n;
    long double a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=2){
        cout<<"0";
        return;
    }
    int res=n-2;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            long double dif=(a[j]-a[i])/(j-i);
            int cnt=0;
            long double num=a[i];
            for(k=i+1;k<n;k++){
                num+=dif;
                if(abs(num-a[k])>eps){
                    cnt++;
                }
                else{
                    num=a[k];
                }
            }
            num=a[i];
            for(k=i-1;k>=0;k--){
                num-=dif;
                if(abs(num-a[k])>eps){
                    cnt++;
                }
                else{
                    num=a[k];
                }
            }
            res=min(res,cnt);
        }
    }
    cout<<res;
    //cout<<eps;
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