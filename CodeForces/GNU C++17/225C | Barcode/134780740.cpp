 #include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int n,m,x,y;
int a[1001];
int memo[1001][1001][2];
int dp(int idx,int wid,int prev){///0='#' 1='.'
    if(idx==m){
        if(wid>=x&&wid<=y){
            return 0;
        }
        return 1e7;
    }
    else if(memo[idx][wid][prev]!=-1){
        return memo[idx][wid][prev];
    }
    else{
        int res=1e7;
        if(prev==1){
            if(wid<x){
                res=min(res,a[idx]+dp(idx+1,wid+1,1));
            }
            if(wid==y){
                res=min(res,n-a[idx]+dp(idx+1,1,0));
            }
            if(wid>=x&&wid<y){
                res=min(res,a[idx]+dp(idx+1,wid+1,1));
                res=min(res,n-a[idx]+dp(idx+1,1,0));
            }
        }
        else{
            if(wid<x){
                res=min(res,n-a[idx]+dp(idx+1,wid+1,0));
            }
            if(wid==y){
                res=min(res,a[idx]+dp(idx+1,1,1));
            }
            if(wid>=x&&wid<y){
                res=min(res,n-a[idx]+dp(idx+1,wid+1,0));
                res=min(res,a[idx]+dp(idx+1,1,1));
            }
        }
        memo[idx][wid][prev]=res;
        return res;
    }
}
 
void solve(){
    int i,j;
    cin>>n>>m>>x>>y;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(s[j][i]=='#'){
                a[i]++;
            }
        }
    }
    memset(memo,-1,sizeof(memo));
    int ans=min(n-a[0]+dp(1,1,0),a[0]+dp(1,1,1));
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