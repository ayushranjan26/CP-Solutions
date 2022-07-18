#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,n;
    string s;
    cin>>s;
    n=s.size();
    if(s[0]==s[n-1]){
        cout<<s;
    }
    else{
        s[n-1]=s[0];
        cout<<s;
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