#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n,m;
    cin>>n>>m;
    int a[m],b[m],c[m];
    vector<pii> res;
    set<int> st;
    for(i=1;i<=n;i++){
        st.insert(i);
    }
    for(i=0;i<m;i++){
        cin>>a[i]>>b[i]>>c[i];
        st.erase(b[i]);
    }
    k=*st.begin();
    for(i=1;i<=n;i++){
        if(k!=i){
            res.push_back({k,i});
        }
    }
    for(i=0;i<n-1;i++){
        cout<<res[i].ft<<" "<<res[i].sd<<"\n";
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