#include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        bool ok=true;
        for(j=1;j<=1000;j++){
            for(k=j;k<=1000;k++){
                if(4*k*j+3*k+3*j==s[i]){
                    ok=false;
                }
            }
        }
        if(ok){
            ans++;
        }
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
