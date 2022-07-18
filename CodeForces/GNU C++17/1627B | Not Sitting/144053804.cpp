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
    int i,j,n,m,r,c;
    cin>>n>>m;
    vector<int> v;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int dis=max({abs(i-0)+abs(j-0), abs(i-n+1)+abs(j-0),abs(i-0)+abs(j-m+1),abs(i-n+1)+abs(j-m+1)});
            v.push_back(dis);
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<n*m;i++){
        cout<<v[i]<<" ";
    }
    return;
}
 
int32_t main(){
    IOS;
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
 