/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
const int mod = 1e9 + 7;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
void solve(){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    if(n<=2){
        if(n==1){
            cout<<a[0];
            return;
        }
        else{
            cout<<max(a[0],a[1]);
            return;
        }
    }
    ll ans=0,ma=a[0];
    bool f=1;
    for(int i1=n-1;i1>0;i1--){
        ma=max(a[i1],ma);
        if(a[i1]<a[i1-1]){
            ans+=a[i1-1]-a[i1];
        }
        if(a[i1]>ans){
            ans=a[i1];
            f=0;
        }
    }
    if(f){
        ll z=0;
        for(int i1=n-1;i1>0;i1--){
            if(a[i1]>=a[i1-1]){
                z=max(a[i1],z);
            }
            else{
                break;
            }
        }
        ans+=z;
    }
    ans=max(ans,ma);
    cout<<ans;
    return;
}
 
int main()
{
  //  ios::sync_with_stdio(0);
 //   cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}