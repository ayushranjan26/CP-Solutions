/*WELCOME TO AYUSH RANJAN CODE'S*/
/*EVERY PROBLEM HAS A SOLUTION SOMETIMES ELEGENT OTHERWISE COMPLEX ELEGENCE*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int chkpower2(int x){
    return (x&&!(x&x-1));
}




void solve(){
    int pc,pr;
    cin>>pc>>pr;
    int xc,xr;
    xc=pc/9;
    if(pc%9!=0){
        xc++;
    }

    xr=pr/9;
    if(pr%9!=0){
        xr++;
    }
    if(xr<=xc){
        cout<<"1 "<<xr;
    }
    else{
        cout<<"0 "<<xc;
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
