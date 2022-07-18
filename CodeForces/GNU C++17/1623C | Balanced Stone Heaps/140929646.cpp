#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
bool chk(vector<int> a,int mn){
    int i,j,n=a.size();
    int extra[n]={0};
    for(i=n-1;i>=2;i--){
        int deductable;
        if(extra[i]+a[i]<mn){
            return false;
        }
        else{
 
        }
        if(extra[i]>=mn){
            deductable=a[i];
        }
        else{
            deductable=a[i]-(mn-extra[i]);
        }
        //cout<<deductable<<" ";
        extra[i-1]+=deductable/3;
        extra[i-2]+=(deductable/3)*2;
    }
    //cout<<endl;
    if(extra[0]+a[0]<mn||extra[1]+a[1]<mn){
        return false;
    }
    return true;
}
 
void solve(){
    int i,j,n;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int lo=1,hi=1000000009;
    int res=1;
    while(lo<=hi){
        int m=(lo+hi)/2;
        if(chk(a,m)){
            res=max(res,m);
            lo=m+1;
        }
        else{
            hi=m-1;
        }
    }
    cout<<res;
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