#include <bits/stdc++.h>
 
#define int long long
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
#define pii pair<int,int>
 
using namespace std;
 
//---------------------- PROVE, THEN WRITE ----------------------//
 
const int mod = 1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n>>k;
    int x[k];
    vector<int> v;
    for(i=0;i<k;i++){
        cin>>x[i];
        v.push_back(n-x[i]);
    }
    int ans=0;
    sort(v.begin(),v.end());
    for(i=1;i<k;i++){
        v[i]+=v[i-1];
    }
    for(i=0;i<k;i++){
        if(v[i]>=n){
            cout<<i;
            return ;
        }
    }
    cout<<k;
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