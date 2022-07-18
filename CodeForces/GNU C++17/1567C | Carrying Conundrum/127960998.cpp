#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    string a="0",b="0",s;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i+=2){
        a+=s[i];
    }
    for(i=1;i<n;i+=2){
        b+=s[i];
    }
    //cout<<a<<" "<<b<<endl;
    int c,d;
    c=stoi(a);
    d=stoi(b);
    c++,d++;
    ll ans=c*d-2;
    cout<<ans;
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