/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
 
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sort(a,a+n);
    ll arr[n/2+1];
    for(int i1=0;i1<n/2+1;i1++){
        arr[i1]=a[n/2+i1];
    }
    ll x[n/2];
    for(int i1=0;i1<n/2;i1++){
        x[i1]=(arr[i1+1]-arr[i1])*(i1+1);
    }
    ll ans=arr[0];
    for(int i1=0;i1<n/2;i1++){
        if(x[i1]<=k){
            k-=x[i1];
            ans=arr[i1+1];
        }
        else{
            ans+=k/(i1+1);
            k=0;
            break;
        }
    }
    if(k>0){
        ans+=k/(n/2+1);
    }
    cout<<ans;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}