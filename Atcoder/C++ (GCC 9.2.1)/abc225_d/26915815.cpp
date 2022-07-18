#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

int a[100005][2];
vector<int> vec;
void dfs(int idx,int dir){
    vec.push_back(idx);
    if(a[idx][dir]!=0){
        dfs(a[idx][dir],dir);
    }
    return ;
}
void solve(){
    int i,j,n,q;
    cin>>n>>q;
    while(q--){
        int x,u,v;
        cin>>x;
        if(x==1){
            cin>>u>>v;
            a[u][0]=v;
            a[v][1]=u;
        }
        else if(x==2){
            cin>>u>>v;
            a[u][0]=0;
            a[v][1]=0;
        }
        else{
            cin>>u;
            vec.clear();
            vector<int> res;
            dfs(u,1);
            reverse(vec.begin(),vec.end());
            for(i=0;i<vec.size();i++){
                res.push_back(vec[i]);
            }
            vec.clear();
            dfs(u,0);
            for(i=1;i<vec.size();i++){
                res.push_back(vec[i]);
            }
            cout<<res.size()<<" ";
            for(i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
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
        //cout<<"\n";
        tc++;
    }
    return 0;
}
