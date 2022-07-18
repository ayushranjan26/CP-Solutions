#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+5;
const int INF=1e18;
 
string s,t;
int ns,nt;
int memo[65][65];
int dp(int idxs,int idxt){
    if(idxt==nt){
        if(idxs!=ns){
            return (ns-idxs);
        }
        else{
            return 0;
        }
    }
    else if(memo[idxs][idxt]!=-1){
        return memo[idxs][idxt];
    }
    else{
        int res=0;
        if(idxs<ns){
            if(s[idxs]==t[idxt]){
                res= dp(idxs+1,idxt+1);
            }
            else{
                res= 1+dp(idxs+1,idxt);
            }
        }
        else{
            res= 1+dp(idxs,idxt+1);
        }
        memo[idxs][idxt]=res;
        return res;
    }
}
 
void solve(){
    int i,j,k,n;
    cin>>n;
    k=1;
    int ans=100;
    while(k<INF/4){
        s=to_string(n);
        t=to_string(k);
        ns=s.size(),nt=t.size();
        memset(memo,-1,sizeof(memo));
        ans=min(ans,dp(0,0));
        //cout<<s<<" "<<t<<" "<<dp(0,0)<<endl;
        k=k*2;
    }
    cout<<ans;
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