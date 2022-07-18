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
    int a[n];
    int pos0=0,posn=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            pos0=i;
        }
        if(a[i]==n){
            posn=i;
        }
    }
    int res=pos0+n-1-posn;
    if(pos0>posn){
        res--;
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
