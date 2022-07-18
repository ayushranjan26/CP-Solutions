#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 998244353;
 
void solve(){
    int i,j,k,n;
    string s[2];
    cin>>n>>s[0];
    cin>>s[1];
    for(i=0;i<n;i++){
        if(s[0][i]==s[1][i]&&s[0][i]=='1'){
            cout<<"NO";
            return ;
        }
    }
    cout<<"YES";
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