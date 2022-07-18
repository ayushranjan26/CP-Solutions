#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
int n,a[100001],b[100001],c[100001];
ll memo[100001][3];
ll dp(int idx,int prev){
    if(idx>=n){
        return 0;
    }
    else if(memo[idx][prev]!=-1){
        return memo[idx][prev];
    }
    else if(prev==0){
        memo[idx][prev]= max(b[idx]+dp(idx+1,1),c[idx]+dp(idx+1,2));
        return memo[idx][prev];
    }
    else if(prev==1){
        memo[idx][prev]= max(a[idx]+dp(idx+1,0),c[idx]+dp(idx+1,2));
        return memo[idx][prev];
    }
    else if(prev==2){
        memo[idx][prev]= max(b[idx]+dp(idx+1,1),a[idx]+dp(idx+1,0));
        return memo[idx][prev];
    }
}
void solve(){
    ll i,j,m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        memo[i][0]=-1,memo[i][1]=-1,memo[i][2]=-1;
    }
    cout<<max({a[0]+dp(1,0), b[0]+dp(1,1), c[0]+dp(1,2),});
    return;
}

int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
