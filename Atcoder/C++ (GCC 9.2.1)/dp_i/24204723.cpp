#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;

void solve(){
    int i,j,k,d1,n,m;
    cin>>n>>m;
    char a[n][m];
    ll dp[n][m];
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++){
        string s;
        cin>>s;
        for(j=0;j<m;j++){
            a[i][j]=s[j];
        }
    }

    dp[0][0]=1;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //cout<<a[i][j];
            if(a[i][j]!='#'){
                if(i!=0&&a[i-1][j]!='#'){
                    dp[i][j]+=dp[i-1][j];
                }
                if(j!=0&&a[i][j-1]!='#'){
                    dp[i][j]+=dp[i][j-1];
                }
            }
            //cout<<dp[i][j]<<" ";
            dp[i][j]%=mod;
        }
        //cout<<endl;
    }

    cout<<dp[n-1][m-1];
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
/*
4 3
3 1 1
2 5 1
1 5 5
2 1 1
*/
