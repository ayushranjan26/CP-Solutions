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
    int i,j,n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int d=0;
    int mx=0,num=0;
    for(auto it:mp){
        if(it.sd>1){
            d=1;
        }
        if(it.sd>mx){
            mx=it.sd;
            num=it.ft;
        }
    }
    if(n==1||d==1){
        if(n==1||mx==n){
            cout<<"0";
            return;
        }
        int ans=n-mx+1;
        cout<<ans;
    }
    else{
        cout<<"-1";
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
