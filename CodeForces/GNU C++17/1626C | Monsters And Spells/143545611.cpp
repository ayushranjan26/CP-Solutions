#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
int sm(int r,int l){
    int res=((r*(r+1)))/2-((l*(l+1)))/2;
    return res;
}
 
void solve(){
    int i,j,n;
    cin>>n;
    int k[n],h[n];
    for(i=0;i<n;i++){
        cin>>k[i];
    }
    for(i=0;i<n;i++){
        cin>>h[i];
    }
    int ans=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            h[j]=max(h[j],h[i]-(k[i]-k[j]));
        }
    }
    ans+=sm(h[0],0);
    int prev=h[0];
    for(i=1;i<n;i++){
        if(h[i]<=(k[i]-k[i-1])){
            ans+=sm(h[i],0);
            prev=h[i];
        }
        else{
            ans+=sm(prev+(k[i]-k[i-1]),prev);
            prev=prev+(k[i]-k[i-1]);
        }
    }
    cout<<ans;
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
 