#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,k;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<int> st;
    for(i=0;i<n;i++){
        cin>>b[i];
        st.insert(b[i]);
    }
    int cx=b[0];
    for(i=1;i<n;i++){
        cx&=b[i];
    }
    for(i=0;i<n;i++){
        auto it=st.find(a[i]|cx);
        if(it!=st.end()){
            st.erase(it);
        }
    }

    if(st.empty()){
        cout<<cx;
    }
    else{
        cout<<"-1";
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
