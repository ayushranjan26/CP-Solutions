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
    int i,j,n,k;
    cin>>n>>k;
    vector<pii> vp(n);
    for(i=0;i<n;i++){
        cin>>vp[i].ft;
    }
    for(i=0;i<n;i++){
        cin>>vp[i].sd;
    }
    sort(vp.begin(),vp.end());
    for(i=0;i<n;i++){
        if(k<vp[i].ft){
            break;
        }
        else{
            k+=vp[i].sd;
        }
    }
    cout<<k;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}