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
    int i,j,k,n,x;
    string s[3],t;
    cin>>s[0]>>s[1]>>s[2]>>t;
    string res="";
    for(i=0;i<t.size();i++){
        int d=(int)(t[i]-'0')-1;
        res+=s[d];
    }
    cout<<res;
    return;

}

int32_t main(){
    IOS;
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
