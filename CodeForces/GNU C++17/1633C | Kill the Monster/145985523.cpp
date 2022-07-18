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
    int i,j,n,hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(i=0;i<=k;i++){
        int new_hc,new_dc;
        new_dc=dc+(k-i)*w;
        new_hc=hc+(i)*a;
        int tc=hm/new_dc;
        if(hm%new_dc!=0){
            tc++;
        }
        tc--;
        int tm=new_hc/dm;
        if(new_hc%dm!=0){
            tm++;
        }
        if(tc<tm){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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