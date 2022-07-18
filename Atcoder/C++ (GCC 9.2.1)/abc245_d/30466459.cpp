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
    int i,j,k,n,m;
    cin>>n>>m;
    int a[n+1],b[m+1],c[n+m+1];
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    for(i=0;i<=n+m;i++){
        cin>>c[i];
    }
    b[m]=c[n+m]/a[n];
    int idx=m-1;
    for(i=m+n-1;i>=0;i--){
        int sm=0;
        for(j=0;j<=n;j++){
            for(k=0;k<=m;k++){
                if(j+k==i&&k!=idx){
                    sm+=a[j]*b[k];
                }
            }
        }
        //cout<<sm;
        sm=c[i]-sm;
        sm/=a[n];
        b[idx]=sm;
        idx--;
    }
    for(i=0;i<=m;i++){
        cout<<b[i]<<" ";
    }
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

