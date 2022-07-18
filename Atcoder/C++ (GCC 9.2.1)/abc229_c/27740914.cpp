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
    int i,j,n,w;
    cin>>n>>w;
    vector<pii> vp(n);
    for(i=0;i<n;i++){
        cin>>vp[i].ft>>vp[i].sd;
    }
    sort(vp.rbegin(),vp.rend());
    int del=0,wt=0;
    for(i=0;i<n;i++){
        if(wt+vp[i].sd>w){
            del+=vp[i].ft*(w-wt);
            wt=w;
        }
        else{
            wt+=vp[i].sd;
            del+=vp[i].ft*vp[i].sd;
        }
    }
    cout<<del;
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
