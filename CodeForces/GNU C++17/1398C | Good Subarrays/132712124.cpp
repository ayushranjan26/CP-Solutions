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
    string s;
    cin>>n>>s;
    int a[n],dp[n+1]={0};
    for(i=0;i<n;i++){
        a[i]=(int)(s[i]-'0');
        a[i]-=1;
    }
    for(i=0;i<n;i++){
        dp[i+1]=dp[i]+a[i];
    }
    map<int,int> mp;
    int res=0;
    for(i=n;i>=0;i--){
        if(mp.find(dp[i])!=mp.end()){
            res+=mp[dp[i]];
        }
        mp[dp[i]]++;
    }
    cout<<res;
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