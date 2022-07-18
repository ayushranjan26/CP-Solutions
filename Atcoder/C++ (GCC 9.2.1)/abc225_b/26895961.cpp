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
    int i,j,n,k;
    cin>>n;
    int d[n+1]={0};
    for(i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        d[u]++;
        d[v]++;
    }
    for(i=1;i<=n;i++){
        if(d[i]==n-1){
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        tc++;
    }
    return 0;
}
