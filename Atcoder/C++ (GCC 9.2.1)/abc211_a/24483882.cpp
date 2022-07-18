#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;

void solve(){
    int i,j,k,n,m;
    ll a1,a2,a3;
    cin>>a1>>a2>>a3;
    ll ans=0;
    if(2*a2>=a1+a3){
        ans=2*a2-a1-a3;
    }
    else{
        if((a1+a3)%2!=0){
            a1++;
            ans++;
        }
        ans+=(a1+a3)/2-a2;
    }
    cout<<ans;
    return;
}

int main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}
