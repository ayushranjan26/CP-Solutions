#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;

int a[305],b[305];
int memo[305][305][305];
int dp(int idx,int av,int bv){
    if(av<=0&&bv<=0){
        return 0;
    }
    else if(idx<0){
        return 400;
    }
    else if(memo[idx][av][bv]!=-1){
        return memo[idx][av][bv];
    }
    else{
        int res;
        res=min(1+dp(idx-1,max(0,av-a[idx]),max(0,bv-b[idx])), dp(idx-1,av,bv));
        memo[idx][av][bv]=res;
        return res;
    }
}
void solve(){
    int i,j,k,n,x,y;
    cin>>n>>x>>y;
    int ca=0,cb=0;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        ca+=a[i],cb+=b[i];
    }
    if(ca<x||cb<y){
        cout<<"-1";
    }
    else{
        memset(memo,-1,sizeof(memo));
        cout<<dp(n-1,x,y);
    }
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
