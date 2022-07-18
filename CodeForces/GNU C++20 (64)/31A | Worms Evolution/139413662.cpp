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
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[k]==a[j]+a[i]){
                    cout<<k+1<<" "<<j+1<<" "<<i+1<<endl;
                    return;
                }
                if(a[i]==a[j]+a[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    return;
                }
                if(a[j]==a[k]+a[i]){
                    cout<<j+1<<" "<<k+1<<" "<<i+1<<endl;
                    return;
                }
            }
        }
    }
    cout<<"-1";
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