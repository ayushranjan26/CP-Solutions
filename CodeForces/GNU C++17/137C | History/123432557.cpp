#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
void solve(){
    int i,j,n,m;
    cin>>n;
    vector<pair<int,int>> vp;
    for(i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    int ans=0,mx=vp[0].sd;
    for(i=1;i<n;i++){
        //cout<<vp[i].ft<<" "<<vp[i].sd<<endl;
        if(vp[i-1].ft==vp[i].ft){
            continue;
        }
        else if(vp[i].sd<mx){
            ans++;
        }
        else{
            mx=vp[i].sd;
        }
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        //cout<<endl;
        cout<<endl;
        tc++;
    }
    return 0;
}