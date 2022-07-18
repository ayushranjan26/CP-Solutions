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
    int i,j,n,m;
    cin>>n>>m;
    vector<pii> dimC(n);
    vector<pii> dimB(m);
    for(i=0;i<n;i++){
        cin>>dimC[i].first;
    }
    for(i=0;i<n;i++){
        cin>>dimC[i].second;
    }
    for(i=0;i<m;i++){
        cin>>dimB[i].first;
    }
    for(i=0;i<m;i++){
        cin>>dimB[i].second;
    }
    sort(dimC.begin(),dimC.end());
    sort(dimB.begin(),dimB.end());

    j=m-1;
    multiset<int> st;

    for(i=n-1;i>=0;i--){
        while(j>=0&&dimB[j].ft>=dimC[i].ft){
            st.insert(dimB[j].sd);
            j--;
        }
        auto it=st.lower_bound(dimC[i].sd);
        if(it!=st.end()){
            st.erase(it);
        }
        else{
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}

