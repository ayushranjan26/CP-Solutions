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
    int a[n],b[m];
    multiset<int> st;
    for(i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }

    for(i=0;i<m;i++){
        if(st.find(b[i])!=st.end()){
            st.erase(st.find(b[i]));
        }
        else{
            //cout<<b[i]<<" ";
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
