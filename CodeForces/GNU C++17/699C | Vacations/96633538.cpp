/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
int dp[150][3];
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
 
    dp[0][0]=0;
    dp[0][1]=0;
    dp[0][2]=0;
    for(int i1=0;i1<n;i1++){
        if(a[i1]==1||a[i1]==3){
            dp[i1+1][1]=max(dp[i1][0]+1,dp[i1][2]+1);
        }
        if(a[i1]==2||a[i1]==3){
            dp[i1+1][2]=max(dp[i1][0]+1,dp[i1][1]+1);
        }
        dp[i1+1][0]=max(dp[i1][0],max(dp[i1][1],dp[i1][2]));
    }
    
    cout<<n-max(dp[n][0],max(dp[n][1],dp[n][2]));
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}