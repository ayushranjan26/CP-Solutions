#include <bits/stdc++.h>
#define ll long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
/*319982OP*/
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e4+1;
const int INF=1e9+3;
 
void solve(){
    int i,j,k,n;
    vector<pair<int,int>> vp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        int arr[k];
        for(j=0;j<k;j++){
            cin>>arr[j];
        }
        int mx=0;
        for(j=0;j<k;j++){
            mx=max(mx,arr[j]-j);
        }
        vp.push_back({mx+1,k});
        //cout<<mx<<endl;
    }
    sort(vp.begin(),vp.end());
    int mx=vp[0].ft,cntk=vp[0].sd;
    //cout<<mx<<" ";
    for(i=1;i<n;i++){
        if(mx+cntk>=vp[i].ft){
            cntk+=vp[i].sd;
        }
        else{
            mx=vp[i].ft-cntk;
            cntk+=vp[i].sd;
        }
        //cout<<mx<<" ";
    }
    cout<<mx;
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
    }
    return 0;
}