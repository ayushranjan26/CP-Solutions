#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
const long long INF = 1ll << 32;
ll M =1000000007;
 
void solve()
{
    int i,j,k,l,n,m,a,b;
    cin>>a>>b;
    ll ans=1;
    for(i=1;i<=min(a,b);i++){
        ans*=i;
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 