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
    int i,j,k,n,s,f;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s>>f;
    vector<int> v;
    v.push_back(0);
    for(i=0;i<2*n;i++){
        v.push_back(a[i%n]);
    }
    for(i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    int mx=0;
    for(i=0;i<n;i++){
        mx=max(mx, v[i+f-s]-v[i]);
    }
    int time=n+2;
    for(i=0;i<n;i++){
        if(mx==v[i+f-s]-v[i]){
            ///time at i+1 th tz s
            ///then time at 1st zone
            k=(s+n-i)%(n);
            if(k==0){
                k=n;
            }
            time=min(time,k);
        }
    }
    //cout<<mx<<" ";
    cout<<time;
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