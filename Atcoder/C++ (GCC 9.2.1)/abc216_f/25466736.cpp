#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+1;
const int INF=1e18;

int n,m;
queue<int> q[200005];
set<int> st;
vector<int> pos[200005];

void rec(int idx){
    if(q[idx].empty()){
        return;
    }
    else{
        int v=q[idx].front();
        if(st.find(v)!=st.end()){
            int i1,i2;
            i1=pos[v][0],i2=pos[v][1];
            q[i1].pop();
            q[i2].pop();
            st.erase(v);
            rec(i1);
            rec(i2);
        }
        else{
            st.insert(v);
        }
        return;
    }
}

void solve(){
    int i,j,k,d;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>k;
        for(j=0;j<k;j++){
            cin>>d;
            q[i].push(d);
            pos[d].push_back(i);
        }
    }
    for(i=0;i<m;i++){
        rec(i);
    }
    if(st.empty()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
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
