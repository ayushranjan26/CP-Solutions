#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod= 998244353;
 
void solve(){
    int i,j,k;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='B'){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1==c2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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