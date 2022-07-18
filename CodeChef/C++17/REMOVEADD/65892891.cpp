#include <bits/stdc++.h>

#define int long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

const int mod = 998244353;

void solve(){
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    int res=n;
    int l=0,r=0;
    while(r<n){
        while(r<n&&mp[a[r]]==0){
            mp[a[r]]++;
            r++;
        }
        //cout<<l<<" "<<r<<endl;
        res=min(res,min(l+2*(n-r), 2*l+n-r));
        while(r<n&&mp[a[r]]==1){
            mp[a[l]]--;
            l++;
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
        cout<<"\n";
        tc++;
    }
    return 0;
}
