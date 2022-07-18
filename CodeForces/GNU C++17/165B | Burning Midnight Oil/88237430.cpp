/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
ll n,k;
bool chk(ll x){
    ll sum=0,k1=1;
    while(n/k1>0){
        sum+=x/k1;
        if(sum>=n){
            return true;
        }
        k1=k1*k;
    }
    if(sum>=n){
        return true;
    }
    else{
        return false;
    }
 
}
 
void solve(){
    cin>>n>>k;
    ll low=1,high=n;
    while(high!=low){
            //cout<<high<<" ";
        ll mid=(high+low+1)/2;
        if(chk(mid)){
            high=mid;
        }
        else{
            low=mid;
        }
        if(high-low==1&&chk(mid)){
               // cout<<high<<" "<<low<<endl;
            break;
        }
    }
    cout<<high;
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