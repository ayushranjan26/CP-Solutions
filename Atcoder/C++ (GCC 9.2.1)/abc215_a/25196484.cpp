#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
int mod=1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    ll s[n],t[n],ans[n];
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){
        cin>>t[i];
        ans[i]=t[i];
    }
    for(i=0;i<n;i++){
        ans[i]=min(ans[i],ans[(i-1+n)%n]+s[(i-1+n)%n]);
    }
    for(i=0;i<n;i++){
        ans[i]=min(ans[i],ans[(i-1+n)%n]+s[(i-1+n)%n]);
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<"\n";
    }
    return;
}

int main(){
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
