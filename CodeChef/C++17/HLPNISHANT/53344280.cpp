#include <bits/stdc++.h>

#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//

const int mod = 1e9+7;

void solve(){
    int i,j,k,n;
    cin>>n;
    int lo=1,hi=n;
    int res=1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if((mid*(mid+1))/2<n){
            res=max(res,mid);
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    res++;
    res=res*2;
    cout<<res;
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
