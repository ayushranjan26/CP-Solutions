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
    int i,j,n,k;
    cin>>n;
    if(n==1){
        cout<<"1";
    }
    else if(n==2){
        cout<<"2";
    }
    else if(n%2==1){
        cout<<n*(n-1)*(n-2);
    }
    else{
        int res;
        if(n%3!=0){
            res=(n)*(n-1)*(n-3);
        }
        else{
            res=(n-1)*(n-2)*(n-3);
        }
        cout<<res;
    }
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