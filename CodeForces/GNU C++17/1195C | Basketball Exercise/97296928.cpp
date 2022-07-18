/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
#define IOS cin.tie(NULL);cout.tie(NULL)
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
ll dp[2][1000002];
ll height[2][1000002];
void solve(){
    int n;
    cin>>n;
 
    for(int i1=1;i1<=n;i1++){
        cin>>height[0][i1];
    }
    for(int i1=1;i1<=n;i1++){
        cin>>height[1][i1];
    }
    for(int i1=1;i1<=n;i1++){
        dp[0][i1]=max(dp[0][i1-1],dp[1][i1-1]+height[0][i1]);
        dp[1][i1]=max(dp[1][i1-1],dp[0][i1-1]+height[1][i1]);
 
    }
    cout<<max(dp[1][n],dp[0][n]);
    return;
}
int main()
{
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}