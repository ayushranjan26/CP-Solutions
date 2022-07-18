/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[2]!=a[1]){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        if(a[0]==a[1]){
            cout<<a[0]<<" "<<a[1]<<" "<<a[2];
        }
        else{
            cout<<a[2]<<" "<<a[0]<<" "<<"1";
        }
    }
 
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}