#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;

void solve(){
    int i,j,k,n,x;
    cin>>n;
    int a[n],sm=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sm+=a[i];
    }
    cin>>x;
    int ans=n*(x/sm);
    sm=(x%sm);
    for(i=0;i<n;i++){
        sm-=a[i];
        ans++;
        if(sm<0){
            break;
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
