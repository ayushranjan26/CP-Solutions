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
    int a[n],ne=0,no=0;
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
        if(a[i1]%2==1){
            no++;
        }
        if(a[i1]%2==0){
            ne++;
        }
    }
    if(ne>0){
        cout<<"no";
    }
    else{
        cout<<"yes";
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
