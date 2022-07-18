#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,m;
    cin>>n>>m;
    vector<string> vs(n);
    for(i=0;i<n;i++){
        cin>>vs[i];
    }
    set<string> st;
    for(i=0;i<m;i++){
        string t;
        cin>>t;
        st.insert(t);
    }
    for(i=0;i<n;i++){
        if(st.find(vs[i])==st.end()){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
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
