/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n,d1;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>d1;
        a[i1]=abs(d1);
        if(i1%2==0){
            a[i1]=(-1)*a[i1];
        }
        //cout<<a[i1]<<"-/ ";
    }
 
    for(int i1=0;i1<n;i1++){
        cout<<a[i1]<<" ";
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