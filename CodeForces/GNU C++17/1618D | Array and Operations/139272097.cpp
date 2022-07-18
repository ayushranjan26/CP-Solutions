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
    int i,j,n,k;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int res=0;
    int d=n-2*k;
    for(i=0;i<d;i++){
        res+=a[i];
    }
    //cout<<res<<" ";
    map<int,int> mp;
    for(i=n-1;i>=d;i--){
        mp[a[i]]++;
    }
    int f=0;
    for(auto it:mp){
        f=max(f,it.sd);
    }
    if(f>k){
        res+=f-k;
    }
//    res+=st.size()/2;
    cout<<res;
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