#include <bits/stdc++.h>

#define ll long long int
#define lld
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//


int n,W;
int v[101],w[101];
ll dp[101][100001];
ll min_weight(int val,int idx){
    if(val<0){
        return 1e16;
    }
    if(idx==n){
        if(val==0){
            return 0;
        }
        else{
            return 1e16;
        }
    }
    if(dp[idx][val]!=-1){
        return dp[idx][val];
    }
    else{
        dp[idx][val]=min(min_weight(val,idx+1),w[idx]+min_weight(val-v[idx],idx+1));
        return dp[idx][val];
    }
}

void solve(){
    int i,j;
    cin>>n>>W;
    for(i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    for(i=100000;i>=0;i--){
        if(min_weight(i,0)<=W){
            cout<<i;
            return;
        }
    }
    return;
}
int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}

