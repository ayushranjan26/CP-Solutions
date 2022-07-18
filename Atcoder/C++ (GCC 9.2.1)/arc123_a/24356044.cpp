#include <bits/stdc++.h>

#define ll long long int
#define ld long double
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
int n;
ld memo[3000][3000],eps=1e-5;
ld p[3000];
ld dp(int idx,int hcnt){
    if(idx==n){
        if(hcnt>n-hcnt){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(memo[idx][hcnt]+1>eps){
        return memo[idx][hcnt];
    }
    else{
        memo[idx][hcnt]=p[idx]*dp(idx+1,hcnt+1)+(1-p[idx])*dp(idx+1,hcnt);
        return memo[idx][hcnt];
    }
}
void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    for(i=0;i<3000;i++){
        for(j=0;j<3000;j++){
            memo[i][j]=-1.00;
        }
    }
    cout<<fixed<<setprecision(10)<<dp(0,0);
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;//cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}

