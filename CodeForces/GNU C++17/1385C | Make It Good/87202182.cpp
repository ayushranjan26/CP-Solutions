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
    int a[n];
    for(int i1=n-1;i1>=0;i1--){
        cin>>a[i1];
    }
    int c1=0;
    for(int i1=0;i1<n-1;i1++){
        if(a[i1]>=a[i1+1]){
            c1++;
        }
    }
    if(c1==n-1){
        cout<<"0";
        return;
    }
    c1=0;
    for(int i1=0;i1<n-1;i1++){
        if(a[i1]<=a[i1+1]){
            c1++;
        }
    }
    if(c1==n-1){
        cout<<"0";
        return;
    }
    int i=0;
    for(int i1=0;i1<n-1;i1++){
        if(a[i1+1]<a[i1]){
            i=i1;
            //cout<<a[i1+1]<<" "<<a[i1]<<"\n";
            break;
        }
        else{
            i=i1;
        }
    }
   // cout<<i<<" ";
    for(int i1=i;i1<n-1;i1++){
        if(a[i1]<a[i1+1]){
            i=i1;
            //cout<<a[i1]<<" "<<a[i1+1]<<"\n";
            break;
        }
        else{
            i=i1;
        }
    }
    if(i==n-2&&a[n-2]>=a[n-1]){
        i++;
    }
    //cout<<i<<" ";
    cout<<n-i-1;
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