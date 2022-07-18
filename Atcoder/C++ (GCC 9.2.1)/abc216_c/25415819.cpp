#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;

//---------------------- PROVE, THEN WRITE ----------------------//
const int mod=1e9+7;
const int N=1e5+1;
const int INF=1e18;


void solve(){
    int i,j,k,x,y,n;
    string z,zz;
    cin>>z;
    n=z.size();
    zz="";
    zz+=z[n-1];
    //cout<<zz;
    y=stoi(zz);
    z.pop_back();
    z.pop_back();
    if(y<=2){
        cout<<z<<"-";
    }
    else if(y<=6){
        cout<<z;
    }
    else{
        cout<<z<<"+";
    }
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
