#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int n,m;
string s;
int memo[303][303][303];
int dp(int idx,int a,int b){///a=0, b=1
    if(idx==n){
        return 1;
    }
    else if(memo[idx][a][b]!=-1){
        return memo[idx][a][b];
    }
    else{
        int res=0;
        if(s[idx]=='?'){
            if(b<m){
                res+=dp(idx+1,max(0LL,a-1),b+1);
            }
            if(a<m){
                res+=dp(idx+1,a+1,max(0LL,b-1));
            }
        }
        else{
            if(s[idx]=='1'){
                if(b<m){
                    res+=dp(idx+1,max(0LL,a-1),b+1);
                }
            }
            else{
                if(a<m){
                    res+=dp(idx+1,a+1,max(0LL,b-1));
                }
            }
        }
        return memo[idx][a][b]=res%mod;
    }
}

void solve(){
    int i,j;
    cin>>n>>m>>s;
    memset(memo,-1,sizeof(memo));
    cout<<dp(0,0,0);
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
