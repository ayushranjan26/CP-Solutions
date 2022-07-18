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
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans=1e15;
    for(i=1;i<n;i++){
        if(a[i]!=a[0]){
            if(ans==1e15){
                ans=a[i]-a[0];
            }
            else{
                ans=__gcd(ans,(a[i]-a[0]));
            }
        }
    }
    if(ans==1e15){
        cout<<"-1";
    }
    else{
        cout<<ans;
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