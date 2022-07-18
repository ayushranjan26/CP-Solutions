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
    int i,j,v,a,b,c;
    cin>>v>>a>>b>>c;
    v=v%(a+b+c);
    if(v<a){
        cout<<"F";
        return;
    }
    v-=a;
    if(v<b){
        cout<<"M";
        return;
    }
    v-=b;
    cout<<"T";
    return;
}

int32_t main(){
    IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
