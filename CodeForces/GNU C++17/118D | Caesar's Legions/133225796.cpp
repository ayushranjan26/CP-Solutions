#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e8;
 
int k1,k2;
 
int memo[101][101][11][11];
int dp(int n1,int n2,int p1,int p2){
    if(n1==0&&n2==0){
        return 1;
    }
    else if(memo[n1][n2][p1][p2]!=-1){
        return memo[n1][n2][p1][p2];
    }
    else{
        int res=0;
        if(p1<k1&&n1>0){
            res+=dp(n1-1,n2,p1+1,0);
        }
        if(p2<k2&&n2>0){
            res+=dp(n1,n2-1,0,p2+1);
        }
        res%=mod;
        memo[n1][n2][p1][p2]=res;
        //cout<<n1<<" "<<n2<<" "<<p1<<" "<<p2<<" = "<<res<<endl;
        return res;
    }
}
 
void solve(){
    int i,j,n1,n2;
    cin>>n1>>n2>>k1>>k2;
    memset(memo,-1,sizeof(memo));
    cout<<dp(n1,n2,0,0);
    return;
}
 
int32_t main(){
    //IOS;
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