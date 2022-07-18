#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define IOS std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ft first
#define sd second
 
using namespace std;
//---------------------- PROVE, THEN WRITE ----------------------//
ll mod=1e9+7;
 
 
void solve(){
    int i,j,k,n,a1,a2,a3,b1,b2,b3;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    ll ans=0;
    if(a1==a2||b1==b2){
        if(a1==a2){
            if(a3==a1&&b3>min(b1,b2)&&b3<max(b1,b2)){
                ans=abs(a1-a2)+abs(b1-b2)+2;
            }
            else{
                ans=abs(a1-a2)+abs(b1-b2);
            }
        }
        else{
            if(b3==b1&&a3>min(a1,a2)&&a3<max(a1,a2)){
                ans=abs(a1-a2)+abs(b1-b2)+2;
            }
            else{
                ans=abs(a1-a2)+abs(b1-b2);
            }
        }
    }
    else{
        ans=abs(a1-a2)+abs(b1-b2);
    }
    cout<<ans;
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