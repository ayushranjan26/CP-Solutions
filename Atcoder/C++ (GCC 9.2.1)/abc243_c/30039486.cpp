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
    int i,j,n;
    cin>>n;
    int x[n],y[n];
    unordered_map<int,set<int>> row;
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
        swap(x[i],y[i]);
        row[x[i]].insert(y[i]);
    }
    string s;
    cin>>s;
    map<pair<int,int>,char> dir;
    for(i=0;i<n;i++){
        dir[{x[i],y[i]}]=s[i];
    }
    for(auto it:row){
        set<int> st=it.sd;
        int r=it.ft;

        auto it2=st.begin();
        bool f=false;
        while(it2!=st.end()){
            if(dir[{r,*it2}]=='R'){
                f=true;
            }
            else if(dir[{r,*it2}]=='L'&&f){
                cout<<"Yes";
                return;
            }
            //cout<<r<<" "<<*it2<<endl;
            it2++;
        }
    }
    cout<<"No";
    return;
}

int32_t main(){
    IOS;
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
