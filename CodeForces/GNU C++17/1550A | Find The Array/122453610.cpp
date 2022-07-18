#include <bits/stdc++.h>
 
#define ll long long int
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
 
int mod=1e9+7;
 
void solve(){
    int i,j,k,n;
    cin>>n;
    int ans=sqrt(n);
    if(ans*ans!=n){
        ans++;
    }
    cout<<ans;
    return;
}
 
int main(){
    //IOS;
    int t,tc=1;
    cin>>t;
    while(tc<=t){
        solve();
        cout<<endl;
        tc++;
    }
    return 0;
}