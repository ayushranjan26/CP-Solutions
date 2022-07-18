#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n],v[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> b;
    for(i=0;i<n;i++){
        if(a[i]%2==1){
            b.push_back(v[i]);
        }
    }
    int m=b.size();
    if(m==0){
        cout<<0;
        return;
    }
    int dp[m]={0};
    dp[m-1]=b[m-1];
    for(i=m-2;i>=0;i--){
        dp[i]=max(dp[i+1],b[i]-dp[i+1]);
    }
    cout<<dp[0];
    return;
}

int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
