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
   double ansa=0.0,ansb=0.0;
   while(n--){
        double g,a,b;
        cin>>g>>a>>b;
        ansa+=g*(b/(a+b));
        ansb+=g*(a/(a+b));
   }
   cout<<setprecision(6)<<fixed<<ansa<<" "<<ansb;
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
