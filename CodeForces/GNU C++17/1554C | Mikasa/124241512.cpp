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
    ll i,j,m,n,k;
    cin>>n>>m;
    m++;
    ll ans=0;
    for(i=32;i>=0;i--){
        if((n>>i&1)==(m>>i&1))continue;
        if((n>>i&1)==1&&(m>>i&1)==0){
            break;
        }
        if((n>>i&1)==0&&(m>>i&1)==1){
            ans|=1<<i;
            n|=1<<i;
            //cout<<i<<" "<<ans<<endl;
        }
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    t=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n\n";
        tc++;
    }
    return 0;
}
 