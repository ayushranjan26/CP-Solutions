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
ld dp[3000][3000];
ld p[3000];

void solve(){
    int i,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    for(i=0;i<=n;i++){
        dp[i][0]=1;
    }
    int head_need=n/2+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=head_need;j++){
            dp[i][j]=p[i-1]*dp[i-1][j-1]+(1-p[i-1])*dp[i-1][j];
        }
    }
    cout<<fixed<<setprecision(10)<<dp[n][head_need];
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

