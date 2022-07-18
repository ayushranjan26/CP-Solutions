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
    int i,j,n,m;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    if(n>m){
        int res=1e10;
        for(j=0;j<n;j++){
            int mx=0;
            for(i=0;i<m;i++){
                mx=max(mx,a[i][j]);
            }
            res=min(res,mx);
        }
        cout<<res;
    }
    else{
        int mx=-1,i1,i2;
        for(i=0;i<m;i++){
            vector<pii> vp;
            for(j=0;j<n;j++){
                vp.push_back({a[i][j],j});
            }
            sort(vp.rbegin(),vp.rend());
            if(vp[1].ft>mx){
                mx=vp[1].ft;
                i1=vp[0].sd;
                i2=vp[1].sd;
            }
        }
        int res=mx;
        for(j=0;j<n;j++){
            if(j==i1||j==i2){
                continue;
            }
            int mx=0;
            for(i=0;i<m;i++){
                mx=max(mx,a[i][j]);
            }
            res=min(res,mx);
        }
        cout<<res;
    }
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