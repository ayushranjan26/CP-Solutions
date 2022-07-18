/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve()
{
    int n,d1;
    cin>>n;
    int a[n];
    int ans=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    for(int i1=0;i1<n-1;i1++){
        if(a[i1]==1){
            ans++;
        }
        else{
            break;
        }
    }
    if(ans%2==0){
        cout<<"First";
    }
    if(ans%2==1){
        cout<<"Second";
    }
 return;
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