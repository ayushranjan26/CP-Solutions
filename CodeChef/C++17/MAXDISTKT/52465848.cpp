#include <bits/stdc++.h>

#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n];
    vector<pii> vp(n);
    for(i=0;i<n;i++){
        cin>>vp[i].ft;
        vp[i].ft--;
        vp[i].sd=i;
    }
    sort(vp.rbegin(),vp.rend());
    int mx=1e9;
    for(i=0;i<n;i++){
        int d=0;
        d=max(d,min(vp[i].ft,mx));
        a[vp[i].sd]=d;
        mx=d-1;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
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
