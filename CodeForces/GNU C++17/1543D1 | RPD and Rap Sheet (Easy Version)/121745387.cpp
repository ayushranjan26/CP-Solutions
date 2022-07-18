#include <bits/stdc++.h>
 
#define ll long long int
#define lld
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
 
void solve(){
    int i,j,n,k;
    cin>>n>>k;
    for(i=0;i<n;i++){
        if(i==0){
            cout<<i<<endl;
        }
        else{
            cout<<(i^(i-1))<<endl;
        }
        cin>>j;
        if(j==1){
            break;
        }
    }
 
    return;
}
int main(){
    //IOS;
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
 