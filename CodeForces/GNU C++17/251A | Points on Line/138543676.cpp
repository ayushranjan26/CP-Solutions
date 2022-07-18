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
    int i,j,n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int res=0;
    for(i=0;i<n;i++){
        j=upper_bound(v.begin(),v.end(),v[i]+d)-v.begin();
        j--;
        if(j-i>1){
            int k=j-i-1;
            res+=(k*(k+1))/2;
        }
        //cout<<res<<" ";
    }
    cout<<res;
    return;
}
 
int32_t main(){
    //IOS;
    int t,tc=1;
    t=1;
    //cin>>t;
    while(tc<=t){
        solve();
        cout<<"\n";
        tc++;
    }
    return 0;
}