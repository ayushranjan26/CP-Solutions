#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
vector<int> adj[105];
int ans[105];
 
void dfs(int idx,int prev){
    int i;
    // cout<<idx<<" ";
    for(i=0;i<adj[idx].size();i++){
        if(adj[idx][i]!=prev){
            ans[adj[idx][i]]=ans[idx]-1;
            dfs(adj[idx][i],idx);
        }
    }
    return ;
}
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],imx=0;
    for(i=0;i<n;i++){
        a[i]=1;
    }
    for(i=0;i<n;i++){
        a[i]=2;
        cout<<"? ";
        for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        cin>>k;
        if(k==0){
            imx=i;
            a[i]=1;
            continue;
        }
        k--;
        if(k<i){
            adj[k].push_back(i);
            adj[i].push_back(k);
        }
        a[i]=1;
    }
    for(i=0;i<n;i++){
        a[i]=2;
    }
 
    for(i=0;i<n;i++){
        a[i]=1;
        cout<<"? ";
        for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
        cin>>k;
        if(k==0){
            a[i]=2;
            continue;
        }
        k--;
        if(k<i){
            adj[k].push_back(i);
            adj[i].push_back(k);
        }
        a[i]=2;
    }
    ans[imx]=n;
    dfs(imx,-1);
    cout<<"! ";
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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