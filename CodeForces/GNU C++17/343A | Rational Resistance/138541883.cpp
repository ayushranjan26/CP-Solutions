#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int calc(int a,int b){
    if(a==0){
        return 0;
    }
    else if(a==1){
        return b;
    }
    else if(a>=b){
        return a/b+calc(a%b,b);
    }
    else{
        return 1+calc(b-a,a);
    }
}
void solve(){
    int i,j,a,b;
    cin>>a>>b;
    cout<<calc(a,b);
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