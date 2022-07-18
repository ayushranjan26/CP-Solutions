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
    int i,j,a,b,c;
    cin>>a>>b>>c;
    if(a==b+c||b==a+c||c==a+b){
        cout<<"YES";
    }
    else if((a==b&&c%2==0)||(c==b&&a%2==0)||(a==c&&b%2==0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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
        cout<<"\n";
        tc++;
    }
    return 0;
}