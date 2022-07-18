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
    int n;
    cin>>n;
    int a[n];
    ll sum=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    sum=0;
    for(int i1=0;i1<n-1;i1++){
        sum+=a[n-1-i1];
        if(sum<=0){
            cout<<"NO";
            return;
        }
    }
    sum=0;
    for(int i1=0;i1<n-1;i1++){
        sum+=a[i1];
        if(sum<=0){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}