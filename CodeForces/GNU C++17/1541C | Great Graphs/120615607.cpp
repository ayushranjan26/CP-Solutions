#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll dp[100001];
void solve()
{
    ll i,j,k,l,n;
    cin>>n;
    ll d[n];
    for(i=0;i<n;i++){
        cin>>d[i];
    }
    ll ans=0;
    sort(d,d+n);
    ll pre[n]={0};
    for(i=1;i<n;i++){
        pre[i]=pre[i-1]+(d[i]-d[i-1])*i;
        ans+=pre[i];
    }
    ans=d[n-1]-ans;
    cout<<ans;
    return;
}
 
int main(){
   // IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}