#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

int res[1000006][3];
set<int> st;
vector<int> v;
void solve(){
    int i,j,n,x;
    cin>>n>>x;
    int p=1;
    st.clear();
    for(i=0;i<32;i++){
        if((p&x)==0){
            st.insert(p);
        }
        p=p*2;
    }
    v.clear();
    for(i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            v.push_back(i);
        }
    }
    int idx=0;
    int z=v[0];
    for(i=1;i<v.size();i++){
        res[idx][0]=1;
        res[idx][1]=z;
        res[idx][2]=v[i];
        idx++;
        z=z|v[i];
    }

    auto it=st.begin();
    while(it!=st.end()){
        if((*it)<=n){
            res[idx][0]=2;
            res[idx][1]=z;
            res[idx][2]=*it;
            idx++;
            z=z^(*it);
        }
        it++;
    }
    if(z!=x){
        cout<<"-1\n";
    }
    else{
        for(i=0;i<n-1;i++){
            cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
        }
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
        cout<<"";
        tc++;
    }
    return 0;
}

