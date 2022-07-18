#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
int n=0,l[101],r[101],vis[101];
bool dfs(int i,int j){
    //cout<<i<<"-"<<j<<endl;
    vis[i]=1;
    if(i==j){
        return true;
    }
    bool res=false;
    for(int k=0;k<n;k++){
        if(vis[k]!=1&&((l[i]<r[k]&&l[i]>l[k])||(r[i]<r[k]&&r[i]>l[k]))){
            res|=dfs(k,j);
        }
    }
    return res;
}
void solve(){
    int i,j,k;
    cin>>k;
    while(k--){
        cin>>j;
        if(j==1){
            cin>>l[n]>>r[n];
            n++;
        }
        else{
            cin>>i>>j;
            i--,j--;
            memset(vis,0,sizeof(vis));
            if(dfs(i,j)){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<"\n";
        cout<<endl;
        tc++;
    }
    return 0;
}