#include <bits/stdc++.h>

#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    set<int> st;
    for(i=2;i<=2*n+1;i++){
        st.insert(i);
    }
    cout<<1<<endl;
    while(1){
        cin>>j;
        if(j==0){break;}
        st.erase(j);
        cout<<*st.begin()<<endl;
        st.erase(st.begin());
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

