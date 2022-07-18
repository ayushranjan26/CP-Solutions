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
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<pii> v0,v1;
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            v0.push_back({a[i],i});
        }
        if(s[i]=='1'){
            v1.push_back({a[i],i});
        }
    }
    sort(v0.begin(),v0.end());
    sort(v1.begin(),v1.end());
    int res[n];
    for(i=0;i<v0.size();i++){
        res[v0[i].sd]=i+1;
    }
    j=v0.size()+1;
    for(i=0;i<v1.size();i++){
        res[v1[i].sd]=j;
        j++;
    }
    for(i=0;i<n;i++){
        cout<<res[i]<<" ";
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