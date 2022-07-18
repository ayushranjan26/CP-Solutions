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
    if(n%2==0){
        cout<<n/2<<" "<<n/2;
    }
    else{
            int x=1,y=n-1;
        for(int i1=2;i1<=sqrt(n);i1++){
                //cout<<i1<<" ";
            if(n%i1==0){
                //cout<<i1<<" ";
                int x1,y1;
                x1=i1;
                y1=n/i1;
           // cout<<x1<<" "<<y1<<endl;
                if(x1<=n/2){
                    x=max(x1,x);
                }
                if(y1<=n/2){
                    x=max(y1,x);
                }
            }
        }
        y=n-x;
        cout<<x<<" "<<y;
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