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
    int i,j,k,n,v;
    cin>>n>>v;
    int mx=0,mn=0;
    mx=(n*(n-1))/2;
    if(v>=n-1){
        mn=n-1;
    }
    else{
        mn=v+((n-v)*(n+1-v))/2-1;
    }
    cout<<mx<<" "<<mn;
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
