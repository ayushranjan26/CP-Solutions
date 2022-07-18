#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n,k;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int res=10*n;
    for(char c='0';c<='9';c++){
        map<int,int> mp;
        for(i=0;i<n;i++){
            for(j=0;j<10;j++){
                if(s[i][j]==c){
                    //v.push_back(j);
                    mp[j]++;
                }
            }
        }
        int mn=0;
        for(auto it:mp){
            mn=max(mn,(it.sd-1)*10+it.ft);
        }
        res=min(res,mn);
    }
    cout<<res;
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
