#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 998244353;
 
int a[200005];
int n;
int memo[200005][2];
 
int dp(int idx,int plyr){
    if(idx>=n){
        return 0;
    }
    else if(memo[idx][plyr]!=-1){
        return memo[idx][plyr];
    }
    else{
        int res=1e13;
        if(plyr==0){
            res=min(dp(idx+1,1),dp(idx+2,1));
        }
        else{
            res=min(dp(idx+2,0)+a[idx]+a[idx+1],a[idx]+dp(idx+1,0));
        }
        memo[idx][plyr]=res;
        return res;
    }
}
 
void solve(){
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        memo[i][0]=-1;
        memo[i][1]=-1;
    }
    a[n]=0,a[n+1]=0;
    cout<<dp(0,1);
    return;
}
 
int32_t main(){
    IOS;
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