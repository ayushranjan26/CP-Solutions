#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,q;
    cin>>q;
    set<int> st;
    map<int,int> mp;
    while(q--){
        int x,c;
        cin>>j;
        if(j==1){
            cin>>x;
            mp[x]++;
            if(mp[x]==1){
                st.insert(x);
            }
        }
        else if(j==2){
            cin>>x>>c;
            mp[x]=max(0LL,mp[x]-c);
            if(mp[x]==0){
                st.erase(x);
            }
        }
        else{
            cout<<*st.rbegin()-*st.begin()<<endl;
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
