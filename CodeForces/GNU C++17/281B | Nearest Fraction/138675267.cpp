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
    int i,j,x,y,n;
    cin>>x>>y>>n;
    int d=__gcd(x,y);
    x=x/d;
    y=y/d;
    if(y<=n){
        cout<<x<<"/"<<y;
        return;
    }
    int  num_val=x,den_val=y,num=0,den=1;
    for(i=1;i<=n;i++){
        int d=(x*i)/y;
        int tn,td;
        td=y*i;
        tn=abs(y*d-x*i);
        if(num_val*td>den_val*tn){
            den=i;
            num=d;
            num_val=tn;
            den_val=td;
        }
        d++;
        td=y*i;
        tn=abs(y*d-x*i);
        if(num_val*td>den_val*tn){
            den=i;
            num=d;
            num_val=tn;
            den_val=td;
        }
        //cout<<tn<<"\\"<<td<<endl;
    }
    cout<<num<<"/"<<den;
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