 #include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int n,k;
int memo[2002][2002];
int dp(int cur,int rem){
    if(rem==0){
        return 1;
    }
    else if(memo[cur][rem]!=-1){
        return memo[cur][rem];
    }
    else{
        int res=0,next=cur;
        while(next<=n){
            res+=dp(next,rem-1);
            res%=mod;
            next+=cur;
        }
        memo[cur][rem]=res;
        return res;
    }
}
 
void solve(){
    int i,j;
    cin>>n>>k;
    int ans=0;
    memset(memo,-1,sizeof(memo));
    for(i=1;i<=n;i++){
        ans+=dp(i,k-1);
        ans%=mod;
    }
    cout<<ans;
    return;
}
 
int32_t main(){
    IOS;
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