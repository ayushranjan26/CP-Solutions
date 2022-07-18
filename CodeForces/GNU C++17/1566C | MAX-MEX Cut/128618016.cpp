#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string s1,s2;
    cin>>n>>s1>>s2;
    int ans=0,c1=0,c0=0;
    for(i=0;i<n;i++){
        if(s1[i]=='0'){
            c0++;
        }
        if(s1[i]=='1'){
            c1++;
        }
        if(s2[i]=='0'){
            c0++;
        }
        if(s2[i]=='1'){
            c1++;
        }
        if(c1&&c0){
            ans+=2;
            c1=0;
            c0=0;
        }
        if(c0==2){
            if(i==n-1||(s1[i+1]=='0'||s2[i+1]=='0')){
                ans++;
                c0=0;
            }
        }
    }
    cout<<ans;
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