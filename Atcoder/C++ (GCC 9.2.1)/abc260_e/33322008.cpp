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
    cin>>n>>k;
    int p[n];
    for(i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
    }
    int res[n];
    int next[n],sz[n]={0};
    for(i=0;i<n;i++){
        next[i]=-1;
        res[i]=-2;
    }
    set<int> st;
    for(i=0;i<n;i++){
        auto it=st.lower_bound(p[i]);
        if(it==st.end()){
            sz[p[i]]=1;
            st.insert(p[i]);
        }
        else{
            int d=*it;
            next[p[i]]=d;
            sz[p[i]]=sz[d]+1;
            st.erase(it);
            st.insert(p[i]);
        }
        if(sz[p[i]]==k){
            int d=p[i];
            while(d!=-1){
                res[d]=i;
                st.erase(d);
                d=next[d];
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<res[i]+1<<"\n";
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
