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
    int i,j,k;
    string n;
    cin>>n;
    reverse(n.begin(),n.end());
    string a[4]={"52","05","57","00"};
    int ans=100;
    for(j=0;j<4;j++){
        k=0;
        for(i=0;i<n.size();i++){
            if(a[j][k]==n[i]){
                k++;
                if(k==2){
                    ans=min(ans,i-1);
                }
            }
        }
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