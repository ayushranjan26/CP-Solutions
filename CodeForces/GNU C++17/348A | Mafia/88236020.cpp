/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    ll n;
    cin>>n;
    ll a[n],sum=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        sum+=a[i1];
    }
    sort(a,a+n);
    if(sum%(n-1)){
        sum=sum/(n-1)+1;
    }
    else{
        sum=sum/(n-1);
    }
    cout<<max(a[n-1],sum);
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