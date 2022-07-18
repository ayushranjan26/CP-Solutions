/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/
 
#include <bits/stdc++.h>
using namespace std;
 
int chkpower2(int x){
    return (x&&!(x&x-1));
}
 
 
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    bool flag=false;
    for(int i1=0;i1<n;i1++){
        for(int i2=0;i2<m;i2++){
            cin>>a[i1][i2];
            if(a[i1][i2]==1){
                if(i1==0||i1==n-1||i2==0||i2==m-1){
                    flag =true;
                }
            }
        }
    }
    if(flag){
        cout<<"2";
    }
    else{
        cout<<"4";
    }
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