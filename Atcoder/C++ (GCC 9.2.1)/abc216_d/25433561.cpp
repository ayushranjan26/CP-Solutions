#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+1;
const int INF=1e18;


void solve(){
    int i,j,k,x,y,n;
    cin>>n;
    set<pair<string,string>> st;
    for(i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        st.insert({a,b});
    }
    if(st.size()==n){
        cout<<"No";
    }
    else{
        cout<<"Yes";
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
