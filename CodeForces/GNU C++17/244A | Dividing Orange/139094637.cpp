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
    int i,j,n,k;
    cin>>n>>k;
    int res[k][n];
    set<int> st;
    for(i=1;i<=n*k;i++){
        st.insert(i);
    }
    for(i=0;i<k;i++){
        int d;
        cin>>d;
        res[i][0]=d;
        st.erase(d);
    }
    for(i=0;i<k;i++){
        for(j=1;j<n;j++){
            res[i][j]=*st.begin();
            st.erase(st.begin());
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
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