#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int n1=n,m1=m;
    int a1=(n1/3)*(m1);
    n1=n1%3;
    a1+=(m1/3)*n1;
    m1=m1%3;
    if(n1==2&&m1==2){
        a1+=2;
    }
    if((n1==2&&m1==1)||(n1==1&&m1==2)||(n1==1&&m1==1)){
        a1++;
    }
    cout<<a1;
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