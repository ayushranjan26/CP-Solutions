#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    vector<int> v;
    int ans=0;
    for(i=0;i<m;i++){
        k=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        //cout<<k<<" ";
        ans+=k;
        v.push_back(a[i]);
        sort(v.begin(),v.end());
    }
    cout<<ans;
    return;
 
}
 
int32_t main(){
    IOS;
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