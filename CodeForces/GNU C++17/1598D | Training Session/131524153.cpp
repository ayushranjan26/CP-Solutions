#include <bits/stdc++.h>
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
const int mod = 998244353;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int a[n],b[n];
    int row[n]={0},col[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        a[i]--,b[i]--;
        row[a[i]]++;
        col[b[i]]++;
    }
    int ans=(n*(n-1)*(n-2))/6;
    for(i=0;i<n;i++){
        ans-=(row[a[i]]-1)*(col[b[i]]-1);
    }
    cout<<ans;
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