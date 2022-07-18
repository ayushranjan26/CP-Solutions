#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int n,k;
int b[1003],c[1003],cost[1003];
int memo[1003][12001];
int dp(int idx,int remk){
    if(idx==n){
        return 0;
    }
    else if(memo[idx][remk]!=-1){
        return memo[idx][remk];
    }
    else{
        int res=0;
        res=dp(idx+1,remk);
        if(remk>=cost[b[idx]]){
            res=max(res,c[idx]+dp(idx+1,remk-cost[b[idx]]));
        }
        return memo[idx][remk]=res;
    }
 
}
void solve(){
    int i,j;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    int tot=0,totval=0;
    for(i=0;i<n;i++){
        tot+=cost[b[i]];
        //cout<<tot<<" ";
        totval+=c[i];
    }
    //cout<<k<<endl;
    if(tot<=k){
        cout<<totval;//<<"f";
        return;
    }
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,k);
    return;
}
 
int32_t main(){
    IOS;
    for(int i=1;i<=1000;i++){
        cost[i]=1e9;
    }
    cost[1]=0;
    for(int i=1;i<1001;i++){
        for(int j=1;j<=i;j++){
            if(i+i/j<1001){
                cost[i+i/j]=min(cost[i+i/j],cost[i]+1);
            }
        }
    }
 
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