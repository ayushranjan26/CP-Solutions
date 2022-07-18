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
    int i,j,k,n,m,x;
    cin>>n>>m>>x;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    set<pii> st;
    for(i=1;i<=m;i++){
        st.insert({0,i});
    }
    int res[n];
    for(i=0;i<n;i++){
        res[i]=st.begin()->sd;
        k=st.begin()->ft;
        st.erase(st.begin());
        st.insert({k+a[i],res[i]});
    }
    cout<<"YES\n";
    for(i=0;i<n;i++){
        cout<<res[i]<<" ";
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