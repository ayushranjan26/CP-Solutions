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
    int i,j;
    string s,n="";
    cin>>s;
    for(i=0;i<s.size();){
        if(s[i]=='.'){
            n+='0';
            i++;
        }
        else{
            if(s[i+1]=='.'){
                n+='1';
            }
            else{
                n+='2';
            }
            i+=2;
        }
    }
    cout<<n;
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