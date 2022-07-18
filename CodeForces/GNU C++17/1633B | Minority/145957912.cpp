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
    int i,j,n;
    string s;
    cin>>s;
    int c0=0,c1=0;
    n=s.size();
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            c1++;
        }
        else{
            c0++;
        }
    }
    if(c1==0||c0==0){
        cout<<0;
    }
    else if(c0==c1){
        cout<<n/2-1;
    }
    else{
        cout<<min(c0,c1);
    }
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
 