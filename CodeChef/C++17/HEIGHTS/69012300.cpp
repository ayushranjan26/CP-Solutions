#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 1e9+7;

void solve(){
    int i,j,n;
    cin>>n;
    int h[n];
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>h[i];
        mp[h[i]]++;
    }
    sort(h,h+n);
    int res=0;
    for(auto it:mp){
        if(it.sd==1){
            res++;
        }
    }
    if(res==1){
        bool f=true;
        for(auto it:mp){
            if(it.sd!=2&&it.sd!=1){
                f=false;
            }
        }
        if(f&&mp[h[n-1]]==1){
            res+=2;
        }
    }
    cout<<(res+1)/2;
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
