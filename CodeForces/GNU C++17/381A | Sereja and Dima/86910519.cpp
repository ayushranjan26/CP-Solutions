/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int i=0,j=n-1,sum1=0,sum2=0,swt=1;
    while(i<=j){
        if(swt){
           sum1+=max(a[i],a[j]);
           if(a[i]>=a[j]){
                i++;
           }
           else{
                j--;
           }
            swt=0;
        }
        else{
           sum2+=max(a[i],a[j]);
           if(a[i]>=a[j]){
                i++;
           }
           else{
                j--;
           }
            swt=1;
        }
    }
    cout<<sum1<<" "<<sum2;
    return;
}
 
int main()
{
   // ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}