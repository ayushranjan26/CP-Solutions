#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    string s;
    cin>>s>>k;
    n=s.size();
    vector<int> pre(n+1,0);
    for(i=0;i<n;i++){
        pre[i+1]=pre[i];
        if(s[i]=='.'){
            pre[i+1]++;
        }
    }
    int ans=0;
    for(i=0;i<n;i++){
        int d=upper_bound(pre.begin(),pre.end(),pre[i]+k)-pre.begin();
        d--;
        //cout<<d<<" ";
        ans=max(ans,d-i);
    }
    cout<<ans;
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
