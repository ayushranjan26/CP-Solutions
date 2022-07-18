#include <bits/stdc++.h>
 
#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,x;
    cin>>k>>x;
    int lo,hi,ans;
    if((k*(k+1))/2<x){
        x-=((k*(k+1))/2);
        lo=1,hi=k-1;
        ans=k-1;
        while(lo<=hi){
            int m=(lo+hi)/2;
            int val=(k*(k-1))/2- ((k-m)*(k-1-m))/2;
            if(val>=x){
                ans=min(ans,m);
                hi=m-1;
            }
            else{
                lo=m+1;
            }
        }
        ans+=k;
        cout<<ans;
    }
    else{
        lo=1,hi=k;
        ans=k;
        while(lo<=hi){
            int m=(lo+hi)/2;
            if((m*(m+1)/2)>=x){
                ans=min(ans,m);
                hi=m-1;
            }
            else{
                lo=m+1;
            }
        }
        cout<<ans;
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
    }
    return 0;
}