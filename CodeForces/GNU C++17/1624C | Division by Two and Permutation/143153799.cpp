#include <bits/stdc++.h>
 
#define ll long long int
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
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v[n+1];
    for(i=0;i<n;i++){
        while(a[i]>0){
            if(a[i]<=n){
                v[a[i]].push_back(i);
            }
            a[i]/=2;
        }
    }
    int vis[n+1]={0};
    for(i=n;i>0;i--){
        bool f=false;
        for(j=0;j<v[i].size();j++){
            if(vis[v[i][j]]==0){
                f=true;
                vis[v[i][j]]=1;
                break;
            }
        }
        if(!f){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
 
int32_t main(){
    IOS;
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