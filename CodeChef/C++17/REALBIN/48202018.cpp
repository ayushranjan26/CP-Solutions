#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second

using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll chkpower2(ll x)
{
    return (x&&!(x&x-1));
}

set<ll> st;
void solve(){
    ll i,j,a,b;
    cin>>a>>b;
    while(b%2==0){
        b/=2;
    }
    if(b==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return;
}

int main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
