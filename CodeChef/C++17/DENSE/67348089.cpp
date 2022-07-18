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
    string s;
    cin>>n>>s;
    int pre[n]={0},suf[n]={0};
    for(i=0;i<n;i++){
        if(s[i]=='('){
            pre[i]++;
        }
        else{
            suf[i]++;
        }
    }
    for(i=1;i<n;i++){
        pre[i]+=pre[i-1];
    }
    for(i=n-2;i>=0;i--){
        suf[i]+=suf[i+1];
    }
    int mx=0;
    for(i=1;i<n;i++){
        mx=max(mx,2*min(pre[i-1],suf[i]));
    }
    cout<<n-mx;
    return;
}

int32_t main(){
    //IOS;
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
