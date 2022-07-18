#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int x[n+1],y[n+1],s[n+1];
    for(i=1;i<n+1;i++){
        cin>>x[i]>>y[i]>>s[i];
    }
    int dp[n+1],pre[n+1];
    pre[0]=0;
    for(i=1;i<n+1;i++){
        j=lower_bound(x+1,x+n,y[i])-x;
        dp[i]=pre[i-1]-pre[j-1]+x[i]-y[i];
        dp[i]=(dp[i]+mod)%mod;
        pre[i]=pre[i-1]+dp[i];
        pre[i]%=mod;
    }
    int ans=x[n]+1;
    for(i=1;i<n+1;i++){
        if(s[i]){
            ans+=dp[i];
            ans%=mod;
        }
    }
    cout<<ans%mod;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
 