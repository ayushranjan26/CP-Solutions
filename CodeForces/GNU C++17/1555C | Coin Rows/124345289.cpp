#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,n;
    cin>>n;
    ll a[2][n],tot=0;
    ll pre1[n+1]={0},pre2[n+1]={0};
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        pre1[i+1]=pre1[i]+a[0][i];
        pre2[i+1]=pre2[i]+a[1][i];
    }
    ll ans=1e12;
    for(i=1;i<=n;i++){
        ans=min(ans,max(pre2[i-1],pre1[n]-pre1[i]));
       // cout<<ans<<" ";
    }
 
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 