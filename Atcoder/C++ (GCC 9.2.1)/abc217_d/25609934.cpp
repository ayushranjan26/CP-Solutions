#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+5;
const int INF=1e18;

void solve(){
    int i,j,k,n;
    set<string> st;
    st.insert("ABC");
    st.insert("ARC");
    st.insert("AGC");
    st.insert("AHC");
    for(i=0;i<3;i++){
        string s;
        cin>>s;
        st.erase(s);
    }
    cout<<*st.begin();
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
