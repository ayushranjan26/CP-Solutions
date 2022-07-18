/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}




void solve(){
    ll h,p;
    cin>>h>>p;
    ll sum=0;
    while(p>0){
        sum+=p;
        p=p/2;
    }
    
    if(sum<h){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    return;
}

int main()
{
 //   ios::sync_with_stdio(0);
  //  cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
