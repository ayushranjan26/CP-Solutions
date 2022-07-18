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
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[n+1]={0},suf[n+1]={0};
    for(i=0;i<n;i++){
        pre[i+1]=pre[i]+a[i];
    }
    for(i=n-1;i>=0;i--){
        suf[i]=suf[i+1]+a[i];
    }
    int ans=0;
    for(i=1;i<n;i++){
        //cout<<suf[i]<<" ";
        if(pre[i]==suf[i]){
            ans++;
        }
    }
    cout<<ans;
    return;
}
 
int32_t main(){
    IOS;
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