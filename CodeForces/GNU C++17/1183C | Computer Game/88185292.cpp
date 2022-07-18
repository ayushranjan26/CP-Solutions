/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    ll k,n,a,b;
    cin>>k>>n>>a>>b;
 
    if(b*n>=k){
        cout<<"-1";
        return;
    }
    ll high=n,low=0;
    while(high!=low){
        int mid=(high+low+1)/2;
        if(mid*a+(n-mid)*b<k){
            low=mid;
        }
        else{
            high=mid-1;
        }
    }
    cout<<low;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
   // cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}