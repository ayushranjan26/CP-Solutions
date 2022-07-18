#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int f[200005];
void solve(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        f[x]++;
    }
    int res=0;
    for(i=1;i<=200000;i++){
        for(j=1;j*i<=200000;j++){
            res+=f[i]*f[j]*f[i*j];
        }
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

