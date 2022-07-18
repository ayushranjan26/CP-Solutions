/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
ll n,k;
vector<ll> v1;
bool chk(ll x){
    ll moves=0;
    for(int i1=n/2;i1<n;i1++){
        if(x-v1[i1]>0){
            moves+=x-v1[i1];
        }
        if(moves>k){
            return false;
        }
    }
    if(moves<=k){
        return true;
    }
    else{
        return false;
    }
}
 
void solve(){
    cin>>n>>k;
    for(int i1=0;i1<n;i1++){
        int d1;
        cin>>d1;
        v1.push_back(d1);
    }
    sort(v1.begin(),v1.end());
    ll small=1,big=20000000000;
    while(small!=big){
        ll mid=(small+big+1)/2;
        if(chk(mid)){
            small=mid;
        }
        else{
            big=mid-1;
        }
    }
    cout<<small;
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