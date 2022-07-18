#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
int tcs=1;
void solve(){
    int i,j,n;
    cin>>n;
    int b[n],p[n];
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    int vis[n],rt;
    for(i=0;i<n;i++){
        vis[i]=-1;
        if(b[i]==i+1){
            vis[i]=0;
            rt=i;
        }
    }
    if(rt+1!=p[0]){
        cout<<"-1";
        return;
    }
    for(i=1;i<n;i++){
        if(vis[b[p[i]-1]-1]!=-1){
            vis[p[i]-1]=0;
        }
        else{
            cout<<"-1";
            return;
        }
    }
    int res[n]={0};
    for(i=1;i<n;i++){
        res[p[i]-1]=i;
    }
    int dis[n]={0};
    for(i=0;i<n;i++){
        dis[p[i]-1]=res[p[i]-1]-res[b[p[i]-1]-1];
    }
    for(i=0;i<n;i++){
        cout<<dis[i]<<" ";
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
        tcs;
    }
    return 0;
}