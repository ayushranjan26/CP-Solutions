#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e7+9;

void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],b[n];
    map<int,int> m;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        m[a[i]]++;
        m[a[i]+b[i]]--;
    }
    int f[n+1]={0};
    int sm=0;
    vector<int> v;
    for(auto it:m){
        v.push_back(it.ft);
    }
    for(i=0;i<v.size()-1;i++){
        sm+=m[v[i]];
        f[sm]+=v[i+1]-v[i];
    }
    for(i=1;i<=n;i++){
        cout<<f[i]<<" ";
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
