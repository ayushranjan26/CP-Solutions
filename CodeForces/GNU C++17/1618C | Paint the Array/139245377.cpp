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
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int g=a[0];
    for(i=0;i<n;i+=2){
        g=__gcd(g,a[i]);
    }
    bool f=true;
    for(i=1;i<n;i+=2){
        if(a[i]%g==0){
            f=false;
        }
    }
    if(f){
        cout<<g;
        return;
    }
 
    g=a[1];
    for(i=1;i<n;i+=2){
        g=__gcd(g,a[i]);
    }
    f=true;
    for(i=0;i<n;i+=2){
        if(a[i]%g==0){
            f=false;
        }
    }
    if(f){
        cout<<g;
        return;
    }
    cout<<"0";
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