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
    int i,j,n;
    cin>>n;
    int l[n],r[n];
    vector<pair<int,pair<int,int>>> vp;
    map<pair<int,int>,int> mp;
    for(i=0;i<n;i++){
        cin>>l[i]>>r[i];
        mp[{l[i],r[i]}]=i;
        vp.push_back({r[i]-l[i],{l[i],r[i]}});
    }
    sort(vp.begin(),vp.end());
    set<int> st;
    for(i=0;i<n;i++){
        st.insert(i+1);
    }
    int res[n];
    for(i=0;i<n;i++){
        auto it=st.lower_bound(vp[i].sd.ft);
        res[mp[vp[i].sd]]=*it;
        st.erase(it);
    }
    for(i=0;i<n;i++){
        cout<<l[i]<<" "<<r[i]<<" "<<res[i]<<endl;
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
        cout<<"\n\n";
        tc++;
    }
    return 0;
}