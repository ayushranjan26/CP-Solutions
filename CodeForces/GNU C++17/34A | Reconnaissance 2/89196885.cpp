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
    for(int i1=0;i1<n;i1++){
        cin>>a[i1];
    }
    int ma=abs(a[0]-a[1]);
    int x=0,y=1;
    for(int i1=0;i1<n-1;i1++){
          //  cout<<abs(a[i1]-a[i1+1])<<endl;
        if(abs(a[i1]-a[i1+1])<ma){
            ma=abs(a[i1]-a[i1+1]);
            x=i1;
            y=i1+1;
        }
    }
    if(abs(a[0]-a[n-1])<ma){
        x=n-1;
        y=0;
    }
    cout<<x+1<<" "<<y+1;
    return;
}
 
int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);
 
    int t;
    t=1;//cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}