#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 1e7+9;

void solve(){
    int i,j,k,n,p;
    cin>>n>>p;
    int a[n],res=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<p){
            res++;
        }
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
