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
    string s[n-2];
    for(i=0;i<n-2;i++){
        cin>>s[i];
    }
    bool f=true;
    string ans="";
    for(i=0;i<n-3;i++){
        ans+=s[i][0];
        if(s[i][1]!=s[i+1][0]){
            f=false;
            ans+=s[i][1];
        }
    }
    ans+=s[n-3];
    if(f){
        ans+='a';
    }
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