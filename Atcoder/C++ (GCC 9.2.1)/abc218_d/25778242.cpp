#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7 ;

void solve(){
    int i,j,k,n;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        set<int> sx,sy;
        for(j=0;j<n;j++){
            if(i==j)continue;
            if(x[i]==x[j]){
                sy.insert(y[j]-y[i]);
            }
            if(y[i]==y[j]){
                sx.insert(x[j]-x[i]);
            }
        }
        for(j=0;j<n;j++){
            if(i==j)continue;
            if(x[i]!=x[j]&&y[i]!=y[j]){
                int dx,dy;
                dx=x[j]-x[i],dy=y[j]-y[i];
                if(sx.find(dx)!=sx.end()&&sy.find(dy)!=sy.end()){
                    ans++;
                }
            }
        }
    }
    cout<<ans/4;
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
