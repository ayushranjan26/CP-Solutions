#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
bool chk(int n){
    string s=to_string(n);
    set<char> st;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if(st.size()==s.size()){
        return true;
    }
    return false;
}
void solve(){
    int i,j,n;
    cin>>n;
    for(i=n+1;;i++){
        if(chk(i)){
            cout<<i;
            return;
        }
    }
 
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