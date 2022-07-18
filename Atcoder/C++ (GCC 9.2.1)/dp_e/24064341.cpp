#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll n,W;
ll w[101],v[101];
ll memo[105][100005];
ll dp(int idx,ll wt){
    if(idx==n){
        return 0;
    }
    else if(memo[idx][wt]!=-1){
        return memo[idx][wt];
    }
    else{
        if(wt+w[idx]<=W){
            memo[idx][wt]= max(v[idx]+dp(idx+1,wt+w[idx]), dp(idx+1,wt));
            return memo[idx][wt];
        }
        else{
            memo[idx][wt]= dp(idx+1,wt);
            return memo[idx][wt];
        }
    }
}
void solve(){
    ll i,j;
    cin>>n>>W;
    for(i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(i=0;i<105;i++){
        for(j=0;j<100005;j++){
            memo[i][j]=-1;
        }
    }
    cout<<dp(0,0);
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
/*
3 3
1 3 1
1 5 1
4 2 1
*/
