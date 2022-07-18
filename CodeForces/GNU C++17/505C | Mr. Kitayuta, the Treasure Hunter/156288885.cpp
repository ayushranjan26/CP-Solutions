#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int d;
int a[30001];
int memo[30001][500];
int dp(int i,int prev){
    //cout<<i<<" ";
    if(i>30000){
        return 0;
    }
    else if(memo[i][prev-(d)+250]!=-1){
        return memo[i][prev-(d)+250];
    }
    else{
        if(prev==1){
            return memo[i][prev-(d)+250]=a[i]+max({ dp(i+prev,prev), dp(i+prev+1,prev+1)});
        }
        else{
            return memo[i][prev-(d)+250]=a[i]+max({dp(i+prev-1,prev-1), dp(i+prev,prev), dp(i+prev+1,prev+1)});
        }
    }
}
 
void solve(){
    int i,j,k,n;
    cin>>n>>d;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    memset(memo,-1,sizeof(memo));
    cout<<dp(d,d);
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 