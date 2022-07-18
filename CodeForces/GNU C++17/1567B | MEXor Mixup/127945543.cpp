#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
int xo[300005];
void solve(){
    int i,j,k,a,b;
    cin>>a>>b;
    int x=xo[a-1];
    if(x==b){
        cout<<a;
        return;
    }
    k=x^b;
    if(k==a){
        cout<<a+2;
        return ;
    }
    else{
        cout<<a+1;
        return;
    }
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    xo[0]=0;
    for(int i=1;i<300005;i++){
        xo[i]=xo[i-1]^i;
    }
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}