#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int n;
vector<int> v;
int memo[300005];
int dp(int idx){
    if(idx>=n){
        return 0;
    }
    else if(memo[idx]!=-1){
        return memo[idx];
    }
    else{
        return memo[idx]=v[idx]+min(dp(idx+1),dp(idx+2));
    }
}
void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    memset(memo,-1,sizeof(memo));
    int res=dp(0);
    memset(memo,-1,sizeof(memo));
    reverse(v.begin(),v.end());
    res=min(res,dp(0));
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

