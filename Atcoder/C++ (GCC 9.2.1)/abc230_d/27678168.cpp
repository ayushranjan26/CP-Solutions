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
    int i,j,n,d;
    cin>>n>>d;
    vector<pii> v(n);
    for(i=0;i<n;i++){
        cin>>v[i].ft>>v[i].sd;
        swap(v[i].ft,v[i].sd);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        //cin>>v[i].ft>>v[i].sd;
        swap(v[i].ft,v[i].sd);
    }
    int ans=1,prev=v[0].sd;
    for(i=1;i<n;i++){
        //cout<<v[i].sd<<" ";
        if(v[i].ft-prev+1>d){
            ans++;
            prev=v[i].sd;
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
