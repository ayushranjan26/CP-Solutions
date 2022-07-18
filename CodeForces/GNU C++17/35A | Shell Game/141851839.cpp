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
    int i,j,k,x;
    cin>>x;
    int a[4]={0};
    a[x]=1;
    for(i=0;i<3;i++){
        int u,v;
        cin>>u>>v;
        swap(a[u],a[v]);
    }
    for(i=1;i<=3;i++){
        if(a[i]==1){
            cout<<i;
            return;
        }
    }
    return;
}
 
int32_t main(){
    IOS;
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
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