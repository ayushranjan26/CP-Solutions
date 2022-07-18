#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int res=a[0]+b[0]+(x-1)*b[0];
    int sum=a[0]+b[0];
    for(i=1;i<x&&i<n;i++){
        int rem=x-i-1;
        sum+=a[i]+b[i];
        res=min(res,sum+(rem)*b[i]);
        //cout<<sum+(rem-1)*b[i]<<" ";
    }
    cout<<res;
    return;
}

int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}
