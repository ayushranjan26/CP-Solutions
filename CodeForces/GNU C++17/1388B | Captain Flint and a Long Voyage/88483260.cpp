/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"8";
    }
    else{
        string s1="";
        int d1=n/4;
        if(n%4==0){
            d1--;
        }
        for(int i1=0;i1<n-d1-1;i1++){
            cout<<"9";
        }
        for(int i1=n-d1-1;i1<n;i1++){
            cout<<"8";
        }
    }
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