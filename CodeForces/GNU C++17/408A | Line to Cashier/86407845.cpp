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
    int a[n],b[n];
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        b[i1]=a[i1]*(15);
    }
   // cout<<"deb";
    for(int i1=0;i1<n;i1++){
            int sum1=0;
        for(int i2=0;i2<a[i1];i2++){
            int d1;
            cin>>d1;
            sum1+=d1*5;
        }
        b[i1]+=sum1;
    }
    //cout<<"ug";
    sort(b,b+n);
    cout<<b[0];
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